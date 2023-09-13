#include <stdio.h>

int main()
{
	// 변수 x에 4를 지정
	// 변수 y에 2를 지정
	// 변수 z 생성
	int x = 4;
	int y = 2;
	int z;

	// z 값 지정 (z 는 x + y) 후 "z = x + y = 3" 출력
	z = x + y;
	printf("z = x + y = %d\n", z);

	// z 값 지정 (z 는 x - y) 후  "z = x - y = 2" 출력
	z = x - y;
	printf("z = x - y = %d\n", z);

	// z 값 지정 (z 는 x * y) 후  "z = x * y = 8" 출력
	z = x * y;
	printf("z = x * y = %d\n", z);

	// z 값 지정 (z 는 x / y) 후  "z = x / y = 2" 출력
	z = x / y;
	printf("z = x / y = %d\n", z);

	return 0;
}
