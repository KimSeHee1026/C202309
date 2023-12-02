#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �л� �� ��� ������
#define STUDENTS 50

// ����ü ����
struct std_Info {
    char name[50];  //�̸��� ���ڿ��� �����ϱ� ���� �迭�� ����
    int scores;
    int std_num;
};

// �Լ� ���� 
void nameInfo(struct std_Info* student);
void scoresInfo(struct std_Info* student);
void classifyStudents(struct std_Info* students, char targetGrade);
void sumScores(struct std_Info* students);
void printRanks(struct std_Info* students);

int main() {
    int input_std_num; // �л� �� �Է� ����

    // ����ڿ��� �л� �� �Է� �ޱ�
    printf("�л� ���� �Է��ϼ��� (�ִ� %d��): ", STUDENTS);
    scanf_s("%d", &input_std_num);

    if (input_std_num <= 0 || input_std_num > STUDENTS) {
        printf("�ùٸ��� ���� �л� ���Դϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    // ����ü �����͸� ����Ͽ� �������� �迭 �Ҵ�
    struct std_Info* students = (struct std_Info*)malloc(input_std_num * sizeof(struct std_Info));

    if (students == NULL) {
        printf("�޸� �Ҵ� ����. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    // �л��� �̸� �� ���� �Է� �ޱ�
    for (int i = 0; i < input_std_num; i++) {
        printf("�л� %d�� ������ �Է��ϼ���:\n", i + 1);
        nameInfo(&students[i]);   // �̸� �Է� �Լ� ȣ��
        scoresInfo(&students[i]); // ���� �Է� �Լ� ȣ��
    }

    // ������ �з� �ް� ���� ������ �Է��ϴ� �Լ�
    char target;
    printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�\n");
    scanf_s(" %c", &target); // ������ �߰��Ͽ� ���� �Է� ���۸� ��쵵�� ��

    // �л��� ���� �з� �� ���
    classifyStudents(students, target);
    sumScores(students);
    printRanks(students);

    // ���� �Ҵ�� �޸� ����
    free(students);

    return 0;
}

// �л��� �̸��� �Է��ϴ� �Լ�
void nameInfo(struct std_Info* student) {
    printf("�̸�: ");
    scanf_s("%s", student->name, (int)sizeof(&(student->name)));
}

// �л��� ������ �Է��ϴ� �Լ�
void scoresInfo(struct std_Info* student) {
    printf("����: ");
    scanf_s("%d", &(student->scores), (int)sizeof(&(student->scores)));
}

// ������ �Լ��鿡�� ����ü ��� ������ �ҷ��� �����ϰԲ� ����
void classifyStudents(struct std_Info* students, char targetGrade) {
    printf("�л� ���� �з�:\n");

    for (int i = 0; i < STUDENTS; i++) {
        char grade = ' ';

        if (students[i].scores >= 90) {
            grade = 'A';
        }
        else if (students[i].scores >= 80) {
            grade = 'B';
        }
        else if (students[i].scores >= 70) {
            grade = 'C';
        }
        else if (students[i].scores >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        if (targetGrade == grade) {
            printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
        }
    }
}

//�л����� ���� ���հ� ����� ����ϴ� �Լ�
void sumScores(struct std_Info* students) {
    int all_sum = 0;

    for (int i = 0; i < STUDENTS; i++) {
        all_sum += students[i].scores;
    }

    double all_average = (double)all_sum / STUDENTS;
    printf("�л��� ������ �� ���� %d �̰�. ��� ���� %f �Դϴ�.\n", all_sum, all_average);
}

// �л��� ���� ����ϴ� �Լ�
void printRanks(struct std_Info* students) {
    for (int i = 0; i < STUDENTS; i++) {
        int ran = 0;
        // �ٸ� �л���� ���Ͽ� ���� ����
        for (int j = 0; j < STUDENTS; j++) {
            if (students[i].scores >= students[j].scores) {
                ran += 1;
            }
        }

        printf("%s �л��� ������ %d�� �Դϴ�.\n", students[i].name, ran);
    }
}
