#include <stdio.h>

int main(void) {
	//character 담을 수 있는 공간 256
	char str[256];

	//scanf_s(입력값, str, str 사이즈 반환)
	scanf_s("%s", str, sizeof(str));

	//print("입력값")
	printf("%s\n", str);
	return 0;
}