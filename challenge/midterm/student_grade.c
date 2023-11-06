#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

double std_total; //���� ������ �����ϴ� ���� ����
double sub_total; //���� ������ �����ϴ� ���� ����

//�л� �� ����� ���ϴ� �Լ�
double StdAvgScore(double studentScores[STUDENTS][SUBJECTS], char studentNames[STUDENTS][CHARNUM]) {
	for (int i = 0; i < STUDENTS; i++) { //�л� �� ��ŭ 5�� �ݺ��ϴ� �ݺ���
		double std_total = 0;
		for (int j = 0; j < SUBJECTS; j++) { //���� �� ��ŭ 3�� �ݺ��ϴ� �ݺ���
			std_total += studentScores[i][j]; //stdTotal�� ����Ʈ�� �ִ� ������ �ϳ��� ���Ͽ� ����
		}
		std_total = std_total / SUBJECTS; //����� ����
		printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], std_total); //����ڿ��� �л��� ��� ������ ���
	}
	return std_total;
}

//���� �� ����� ���ϴ� �Լ�
double SubAvgScore(double studentScores[STUDENTS][SUBJECTS], char subjectNames[SUBJECTS][CHARNUM]) {
	for (int i = 0; i < SUBJECTS; i++) { //���� �� ��ŭ 3�� �ݺ��ϴ� �ݺ���
		double sub_total = 0;
		for (int j = 0; j < STUDENTS; j++) { //�л� �� ��ŭ 5�� �ݺ��ϴ� �ݺ���
			sub_total += studentScores[j][i];//�л� ����ŭ 5�� ����Ʈ���� ���� ������ ���� �� ����
		}
		sub_total = sub_total / STUDENTS; //����� ����
		printf("\t%s�� ��� ������ %.2lf �Դϴ�. \n", subjectNames[i], sub_total);
	}
	return sub_total;
}


int main(void) {
	char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);

	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
		scanf_s("%s", &studentNames[i], (int)sizeof(studentNames[i]));
	}


	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) { //�л� �� ��ŭ �̸��� �Է°����� �޴� �ݺ��� ����
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) { //�̸� �߰��߰��� ','�� ����
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

	
	for (int i = 0; i < STUDENTS; i++) { //�л� �� ��ŭ 5�� �ݺ��ϴ� �ݺ���
		printf("\t%s�� ����: ", studentNames[i]);
		for (int j = 0; j < SUBJECTS; j++) { //���� �� ��ŭ  3���ݺ��Ͽ� studentScores ����Ʈ�� ������
			scanf_s("%lf", &studentScores[i][j]); //����ڿ��� ������ �Է¹���
		}
	}

	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");

	double come_std_avgscore; //StdAvgScore �Լ��� �ҷ� �� ���� ����
	come_std_avgscore = StdAvgScore(studentScores, studentNames); //StdAvgScore �Լ��� �ҷ���

	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

	double come_subscore; //StdAvgScore �Լ��� �ҷ� �� ���� ����
	come_subscore = SubAvgScore(studentScores, subjectNames); //SubAvgScore �Լ��� �ҷ���

	printf("���α׷��� �����մϴ�. ");
	return 0;
}