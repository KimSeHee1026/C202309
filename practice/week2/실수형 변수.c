#include <stdio.h>

int main(void) {
	// ���� pi1 ��.1415926�� ����
	float pi1 = 3.1415926f;

	// pi1�� ��ȯ�� �� �Ҽ��� 5�ڸ����� �ݿø�
	printf("%.5f\n", pi1);

	// ���� pi2 �� 3,141 �� ����
	double pi2 = 3.141;

	// pi2�� ��ȯ�� �� 3��° �ڸ����� �ݿø�
	printf("%.3lf", pi2);
	return 0;
}