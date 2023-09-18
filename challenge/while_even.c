#include <stdio.h>

int main(void) {
	// 함수 i에 1 초기화
	int i = 0;
	// i가 10미만일 때까지 반복하는 함수
	while (i < 10) {
		// i가 짝수이면 반복문 처음으로 돌아감
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello World! \n", i);
	}
	return 0;
}