#include <stdio.h>

int main()
{
	// ���� x�� 4�� ����
	// ���� y�� 2�� ����
	// ���� z ����
	int x = 4;
	int y = 2;
	int z;

	// z �� ���� (z �� x + y) �� "z = x + y = 3" ���
	z = x + y;
	printf("z = x + y = %d\n", z);

	// z �� ���� (z �� x - y) ��  "z = x - y = 2" ���
	z = x - y;
	printf("z = x - y = %d\n", z);

	// z �� ���� (z �� x * y) ��  "z = x * y = 8" ���
	z = x * y;
	printf("z = x * y = %d\n", z);

	// z �� ���� (z �� x / y) ��  "z = x / y = 2" ���
	z = x / y;
	printf("z = x / y = %d\n", z);

	return 0;
}
