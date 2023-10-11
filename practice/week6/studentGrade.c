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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
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
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);

	// �л��� ���� �з� �� ���
	classifyStudents(scores, target);

	return 0;
}