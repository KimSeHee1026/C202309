#include <stdio.h>

// multiF �Լ� �ʱ�ȭ
int multiF(int value);

// ����ڿ��� �Է°��� ��� �� ����ϴ� �Լ�
int main() {
	printf("1���� 2������ ���� %d\n", multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));

	return 0;
}

// muntiF() �Լ����� ��� �����ִ� �Լ�
int multiF(int value) {
	// ���� ���� �ʱ�ȭ
	int i;
	int multiF = 1;

	// multiF() �Լ����� �ݺ��ϴ� �ݺ��� ����
	for (i = 1; i <= value; i = i + 1) {
		multiF = multiF * i;
	}
	
	return multiF;
}