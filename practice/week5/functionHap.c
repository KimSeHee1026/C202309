#include <stdio.h>
// �Լ� hapf �ʱ�ȭ
int hapf(int value);

// ����ڿ��� ���� �˷��ִ� ��� �Լ�
void main() {
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
}
// 1���� hapf ()�Լ��� ������ ���ϴ� �Լ� ����
int hapf(int value) {
	// ���� ���� �ʱ�ȭ
	int i = 1;
	int hap = 0;

	// hapf() �Է°��� ������ ���ϴ� �ݺ��� ����
	while (i <= value) {
		hap = hap + i;
		i++;
	}
	return hap;
}
