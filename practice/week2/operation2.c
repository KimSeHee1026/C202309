#include <stdio.h>

int main()
{
	//변수 생성 및 값 지정
	int x = 4;
	int y = 2;
	int z;

	//변수 z 에 계산식의 값을 지정 후 출력
	z = (x + y) * (x - y);
	printf("z = (x + y) * (x - y) = %d\n", z);

	z = (x * y) + (x / y);
	printf("z = (x * y) + (x / y) = %d\n", z);

	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);

	return 0;
}