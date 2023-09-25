#include <stdio.h>

int main(void) {
	//floor 함수 초기화
	int floor;
	// 사용자에게 몇 층을 쌓을지 입력값을 받는 함수
	printf("몇 층을 쌓겠습니까? (5 ~ 100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) // 사용자에게 받은 입력값만큼 줄을 출력하는 함수
	{
		for (int j = 0; j < floor - 1 - i; j++) // 사용자에게 받은 입력값을 floor 줄애 -1-i 를 계산 후 빈칸을 출력하는 함수
		{
			printf("S");
		}
		for (int k = 0; k <= i * 2 + 1; k++) // *를 해당 줄 중 *2+1로 홀수로 출력하는 함수
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}