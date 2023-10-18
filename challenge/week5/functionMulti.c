#include <stdio.h>

// multiF 함수 초기화
int multiF(int value);

// 사용자에게 입력값을 계산 후 출력하는 함수
int main() {
	printf("1부터 2까지의 곱은 %d\n", multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));

	return 0;
}

// muntiF() 함수들을 모두 곱해주는 함수
int multiF(int value) {
	// 지역 변수 초기화
	int i;
	int multiF = 1;

	// multiF() 함수들을 반복하는 반복문 생성
	for (i = 1; i <= value; i = i + 1) {
		multiF = multiF * i;
	}
	
	return multiF;
}