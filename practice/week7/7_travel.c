#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// �迭 �ʱ�ȭ
char name[NUMPEOPLE][10];
char cities[NUMCITY][10];

// �Լ� �ʱ�ȭ
void calculateTravelDays();

int main() {

	// ����ڷκ��� ���� �̸� �Է°� �ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����� �ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", name[i], (int)sizeof(name[i]));
	}

	//�Լ� ȣ��
	calculateTravelDays(name);

	return 0;
}

void calculateTravelDays() {
	//�Լ� �ʱ�ȭ
	int travelDays[NUMCITY][NUMPEOPLE];

	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s ���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], name[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		//�Լ� ����
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}

		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);
	}
}