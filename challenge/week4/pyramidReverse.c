#include <stdio.h>

int main() {
	// ����� �κ��� �Է°��� �޴� �Լ�
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5 ~ 100)");
	scanf_s("%d", &floor);

	// ������� �Է°��� 5 �̻� Ȥ�� 100���ϰ� �ƴ� �� �ٽ� �޴� �Լ�
	while (floor < 5 || floor > 100) {
		printf("�Է°��� 5 �����̰ų� 100 �̻��Դϴ�! �ٸ� ���� �Է��ϼ���.");
		// ����ڿ��� �ٽ� �Է°� �ޱ�
		printf("�ٽ� �Է·� �ּ��� (5 ~ 100)");
		scanf_s("%d", &floor);
	}

	// ����ڿ��� ���� �Է°� ��ŭ �ݺ���
	for (int i = floor; i > 0; i--) {
		// ����
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}
		// ��
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}