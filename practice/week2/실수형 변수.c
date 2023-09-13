#include <stdio.h>

int main(void) {
	// 변수 pi1 를.1415926로 지정
	float pi1 = 3.1415926f;

	// pi1을 반환할 때 소수점 5자리에서 반올림
	printf("%.5f\n", pi1);

	// 변수 pi2 를 3,141 로 지정
	double pi2 = 3.141;

	// pi2를 반환할 때 3번째 자리에서 반올림
	printf("%.3lf", pi2);
	return 0;
}