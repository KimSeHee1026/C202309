#include <stdio.h>

int main(void) {
	int input;

	//print("���� �Է��ϼ��� ")
	printf("���� �Է��ϼ��� :");

	//scanf_s(�Է°�, input �ּҷ� �̵�)
	//scanf_s(�輼��, $input);
	scanf_s("%d", &input);

	//print("�Է°� :", �輼��)  -> �輼��� ���
	printf("�Է°� : %d\n", input);
	return 0;
}