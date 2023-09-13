#include <stdio.h>

int main()
{
	//각각 변수 x, y, z 지정
	int x;
	int y;
	int z;

	//변수x 에 1을 지정, 변수 y에 2를 지정
	x = 1;
	y = 2;

	//변수 z 를 생성하고, 변수 z 에 x + y 값(3)을 지정
	z = x + y;

	//변수 z 값을 출력
	printf("%d", z);

	return 0;
}