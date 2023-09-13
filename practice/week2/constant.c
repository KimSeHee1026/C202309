#include <stdio.h>

// 상수 정의
# define X 1
# define PI 3.141592

int main()
{
	//변수 z 생성
	double z;

	//변수 z 는 X + PI 값을 출력
	z = X + PI;

	//z (X + PI) 값을 출력하는 함수
	printf("%f", z);

	return 0;
}