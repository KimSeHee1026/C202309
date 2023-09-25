#include <stdio.h>

int main(void) {
	//user_floor 함수 초기화
	int user_floor;

	// 사용자에게 몇 층을 쌓을지 입력값을 받는 함수
	printf("몇 층을 쌓겠습니까? (5 ~ 100)");
	scanf_s("%d", &user_floor);

	// 사용자의 입력값이 5와 100사이여야 하는 조건문을 설립
	if (user_floor < 5 || user_floor > 100) {
		printf("값을 잘못 입력하셨습니다. 5부터 100사이의 값을 입력해주세요.");
	} while (user_floor < 5 || user_floor > 100);

	// 사용자에게 받은 입력값만큼 줄을 출력하는 함수
		for (int i = 0; i < user_floor; i++) {

			// 사용자에게 받은 입력값을 floor 줄애 -1-i 를 계산 후 빈칸을 출력하는 함수
			for (int j = 0; j < user_floor - 1 - i; j++) {
				printf("S");
			}

			// *를 해당 줄 중 *2+1로 홀수로 출력하는 함수
			for (int k = 0; k <= i * 2 + 1; k++) {
				printf("*");
			}

			printf("\n");
		}

		return 0;
	}
