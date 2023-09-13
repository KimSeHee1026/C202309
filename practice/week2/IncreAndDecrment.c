#include <stdio.h>

int main()
{
	//변수 x 에 1를 지정
	int x = 1;

	//변수 x 의 다양한 계산식의 값을 출력하는 함수
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