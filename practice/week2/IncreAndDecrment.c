#include <stdio.h>

int main()
{
	//���� x �� 1�� ����
	int x = 1;

	//���� x �� �پ��� ������ ���� ����ϴ� �Լ�
	//1
	printf("x%d\n", x++);
	//2
	printf("x%d\n", x++);
	//4
	printf("x%d\n", ++x);
	//4
	printf("x%d\n", x--);
	//2
	printf("x%d\n", x--);
	//1
	printf("x%d\n", --x);

	return 0;
}