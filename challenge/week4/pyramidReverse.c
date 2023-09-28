#include <stdio.h>

int main() {
	// 사용자 로부터 입력값을 받는 함수
	int floor;
	printf("몇 층을 쌓겠습니까? (5 ~ 100)");
	scanf_s("%d", &floor);

	// 사용자의 입력값이 5 이상 혹은 100이하가 아닐 떄 다시 받는 함수
	while (floor < 5 || floor > 100) {
		printf("입력값이 5 이하이거나 100 이상입니다! 다른 값을 입력하세요.");
		// 사용자에게 다시 입력값 받기
		printf("다시 입력래 주세요 (5 ~ 100)");
		scanf_s("%d", &floor);
	}

	// 사용자에게 받은 입력값 만큼 반복함
	for (int i = floor; i > 0; i--) {
		// 공백
		for (int j = 0; j < floor - i; j++) {
			printf("S");
		}
		// 별
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}