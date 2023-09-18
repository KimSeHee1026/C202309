#include <stdio.h>

int main(void) {
	// 함수 i 0로 초기화
	int i = 0;

	// do 함수에서 무조건 print 문 실행
	do {
		i++;
		if (i % 2 == 0) { //i 가 짝수이면 반복문 처음으로
		continue;
	}
		//i가 홀수인 10미만인 수일 경우 프린트 출력
		printf("%d Hello World!\n", i);
	} while (i < 10);

	return 0;
	}