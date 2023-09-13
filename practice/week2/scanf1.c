#include <stdio.h>

int main(void) {
	int input;

	//print("값을 입력하세요 ")
	printf("값을 입력하세요 :");

	//scanf_s(입력값, input 주소로 이동)
	//scanf_s(김세희, $input);
	scanf_s("%d", &input);

	//print("입력값 :", 김세희)  -> 김세희로 출력
	printf("입력값 : %d\n", input);
	return 0;
}