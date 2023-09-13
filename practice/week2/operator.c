#include <stdio.h>

int main()
{
	//변수 x 는 4를 더하는 변수
	//변수 y 는 2를 빼는 변수
	int x = +4;
	int y = -2;

	//지정된 변수 x, y 를 계산 후 출력하는 변수
	
	printf("x + (-y) = %d\n", x + (-y));
	printf("-x + (+y) =  %d\n", -x + (+y));

	return 0;
}