#include <stdio.h>

int main(void) {
	//int ����1, ����2, ����3
	int one, two, three;

	//printf("���� 3���� �Է��ϼ��� :")
	printf("���� 3���� �Է��ϼ��� : ");
	
	//scanf_s(�Է°�1, �Է°�2, �Է°�3, �Է°� �����1, �Է°� �����2, �Է°� �����3)
	scanf_s("%d %d %d", &one, &two, &three);

	//printf(n ��° �� : ����n, n)
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);
	return 0;
}