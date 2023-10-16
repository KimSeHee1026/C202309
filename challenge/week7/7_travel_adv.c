#include <stdio.h>

// ��� �ʱ�ȭ
#define NUMCITY 3
#define NUMPEOPLE 2

//������ �̸�, ���� �̸� �迭 �ʱ�ȭ

char name[NUMPEOPLE][10];
char cities[NUMCITY][10];

//function �ʱ�ȭ ����
int getSum(int numArrary[], int length);
double getAverage(double numArrary[], int length);
void printFamousCity(double dayArray[], int length);
void calculateTravelDays(char name[NUMPEOPLE][10]);


//����ڰ� ���ÿ��� ���� �ϼ��� �Է��ϰ� �迭�� �����ϴ� �Լ�
void calculateTravelDays(char name[NUMPEOPLE][10]) {
	//�Լ� �ʱ�ȭ
	int travelDays[NUMCITY][NUMPEOPLE];
	//������� �Է°��� �迭�� �ִ� ���ǹ� ����
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s ���� ��� %s �� ���� �� ���� �Է��ϼ���: ", cities[i], name[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	//���ÿ��� �� �ϼ� �� ��� �� ���� ����ϰ� ����ϴ� �Լ�
	for (int i = 0; i < NUMCITY; i++) {
		// �� �� �� ���
		int totalDays = getSum(travelDays[i], NUMPEOPLE);
		// ������ ��� �ϼ� ���
		float averageDays = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s ���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDays, averageDays);
	}
	// ���� �α� �ִ� ���� ��� �Լ�
	printFamousCity(travelDays[0], NUMPEOPLE);
}
	// �迭���� ���� ����ϴ� �Լ�
	int getSum(int numArray[], int length) {
		int totalDays = 0;
		for (int i = 0; i < length; i++) {
			totalDays += numArray[i];
		}
		return totalDays;
	}
	// �迭���� ����� ����Ѵ� �Լ�
	double getAverage(int numArray[], int length) {
		int totalDays = getSum(numArray, length);
		return (double)totalDays / length;
	}
	// �α��ִ� ���ø� ����ϴ� �Լ�
	void printFamousCity(double dayArray[], int length) {
		// ���� ���� ��� �ϼ� ã�� ���� �ʱ�ȭ
		double maxDay = 0;
		int maxDayIndex = 0;

		//�� ������ ��� �ϼ� ��
		for (int i = 0; i < length; i++) {
			if (dayArray[i] > maxDay) {
				maxDay = dayArray[i];
				maxDayIndex = i;
			}
		}

		//�α��ִ� ���� ���
		printf("��� �� �������� ���� �α� �ִ� ���ô� %s �Դϴ�. (��� �ӹ� ��: %.2f)\n", cities[maxDayIndex], maxDay);
	}
