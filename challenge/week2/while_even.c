#include <stdio.h>

int main(void) {
	// �Լ� i�� 1 �ʱ�ȭ
	int i = 0;
	// i�� 10�̸��� ������ �ݺ��ϴ� �Լ�
	while (i < 10) {
		// i�� ¦���̸� �ݺ��� ó������ ���ư�
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello World! \n", i);
	}
	return 0;
}