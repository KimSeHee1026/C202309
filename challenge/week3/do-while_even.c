#include <stdio.h>

int main(void) {
	// �Լ� i 0�� �ʱ�ȭ
	int i = 0;

	// do �Լ����� ������ print �� ����
	do {
		i++;
		if (i % 2 == 0) { //i �� ¦���̸� �ݺ��� ó������
		continue;
	}
		//i�� Ȧ���� 10�̸��� ���� ��� ����Ʈ ���
		printf("%d Hello World!\n", i);
	} while (i < 10);

	return 0;
	}