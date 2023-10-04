#include <stdio.h>
// 함수 hapf 초기화
int hapf(int value);

// 사용자에게 합을 알려주는 출력 함수
void main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}
// 1부터 hapf ()함수의 값들을 곱하는 함수 생성
int hapf(int value) {
	// 지역 변수 초기화
	int i = 1;
	int hap = 0;

	// hapf() 입력값의 값들을 곱하는 반복문 생성
	while (i <= value) {
		hap = hap + i;
		i++;
	}
	return hap;
}
