#include <stdio.h>

int main(void) {
	//floor �Լ� �ʱ�ȭ
	int floor;
	// ����ڿ��� �� ���� ������ �Է°��� �޴� �Լ�
	printf("�� ���� �װڽ��ϱ�? (5 ~ 100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) // ����ڿ��� ���� �Է°���ŭ ���� ����ϴ� �Լ�
	{
		for (int j = 0; j < floor - 1 - i; j++) // ����ڿ��� ���� �Է°��� floor �پ� -1-i �� ��� �� ��ĭ�� ����ϴ� �Լ�
		{
			printf("S");
		}
		for (int k = 0; k <= i * 2 + 1; k++) // *�� �ش� �� �� *2+1�� Ȧ���� ����ϴ� �Լ�
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}