#include <stdio.h>

int main(void) {
	//int 변수1, 변수2, 변수3
	int one, two, three;

	//printf("정수 3개를 입력하세요 :")
	printf("정수 3개를 입력하세요 : ");
	
	//scanf_s(입력값1, 입력값2, 입력값3, 입력값 저장소1, 입력값 저장소2, 입력값 저장소3)
	scanf_s("%d %d %d", &one, &two, &three);

	//printf(n 번째 값 : 변수n, n)
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);
	return 0;
}