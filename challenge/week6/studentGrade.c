#include <stdio.h>
#define STUDENTS 5

// ������ ������ ����Ͽ� �з��ϴ� �Լ� 
void classifyStudents(int scores[], char targetGrade) {
	// A,B,C,D,F �� �ϳ��� �Է��ϴ� �Լ�
	printf("�л� ���� �з�: \n");
	// grade �Լ� �ʱ�ȭ
	char grade = ' ';
	// ������ ������ ���ǹ�
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		//������ ���ǹ��� grade �Լ� ���� ���� �� ����ϴ� �Լ�
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}
// �л��� ������ ������ ����ϴ� �Լ�
void sumScores(int scores[]) {
	// �Լ� �ʱ�ȭ
	int all_sum = 0;
	int sum_result;
	double all_average;

	// �ݺ����� ���� �迭�� �ִ� ��� ���� �����ϴ� �Լ�
	for (int i = 0; i < STUDENTS; i++) {
		all_sum += scores[i];
		sum_result = all_sum;
	}
	// ���� �Լ��� ���� ����� ����ϴ� �Լ�
	all_average = sum_result / STUDENTS;
	printf("�л��� ������ �� ���� %d �̰�. ��� ���� %f �Դϴ�.\n", sum_result, all_average);

}

// �л��� ������ ������ �ű�� �Լ�
void printRanks() {

	// �Լ� i �ʱ�ȭ �� ��ũ�� ���ϱ� ���� ������ ������ ū��� ������ �ϳ��� �ø��� �ݸ�
	for (int i = 0; i < STUDENTS; i++) {
		int ran = 1;
		for (int j = 0; j < STUDENTS;j++) {
			if (i <= j) {
				ran += 1;
			}
		}
		//�л� ���� ���
		printf("%d�л��� ������ %d �Դϴ�.\n",i + 1, ran);
	}
}
int main() {
	// ���� �Է°��� �����ϴ� �迭 ����
	int scores[STUDENTS];

	// �л��� ���� �Է� �޴� ���ǹ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	// ���� �ӽ� ���幮
	char ch = getchar();

	// ������ �з� �ް� ���� ������ �Է��ϴ� �Լ�
	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�\n");
	scanf_s("%c", &target, 1);

	// �л��� ���� �з� �� ���
	classifyStudents(scores, target);
	sumScores(scores);
	printRanks(scores);

	return 0;
}