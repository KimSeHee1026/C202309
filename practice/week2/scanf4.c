#include <stdio.h>

int main(void) {
	//character ���� �� �ִ� ���� 256
	char str[256];

	//scanf_s(�Է°�, str, str ������ ��ȯ)
	scanf_s("%s", str, sizeof(str));

	//print("�Է°�")
	printf("%s\n", str);
	return 0;
}