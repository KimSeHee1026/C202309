#include <stdio.h>

int main(void) {
	//user_floor �Լ� �ʱ�ȭ
	int user_floor;

	// ����ڿ��� �� ���� ������ �Է°��� �޴� �Լ�
	printf("�� ���� �װڽ��ϱ�? (5 ~ 100)");
	scanf_s("%d", &user_floor);

	// ������� �Է°��� 5�� 100���̿��� �ϴ� ���ǹ��� ����
	if (user_floor < 5 || user_floor > 100) {
		printf("���� �߸� �Է��ϼ̽��ϴ�. 5���� 100������ ���� �Է����ּ���.");
	} while (user_floor < 5 || user_floor > 100);

	// ����ڿ��� ���� �Է°���ŭ ���� ����ϴ� �Լ�
		for (int i = 0; i < user_floor; i++) {

			// ����ڿ��� ���� �Է°��� floor �پ� -1-i �� ��� �� ��ĭ�� ����ϴ� �Լ�
			for (int j = 0; j < user_floor - 1 - i; j++) {
				printf("S");
			}

			// *�� �ش� �� �� *2+1�� Ȧ���� ����ϴ� �Լ�
			for (int k = 0; k <= i * 2 + 1; k++) {
				printf("*");
			}

			printf("\n");
		}

		return 0;
	}
