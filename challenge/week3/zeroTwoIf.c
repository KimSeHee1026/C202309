#include <stdio.h>

int main() {
	// num 에 함수 초기화
	int num = 0;

	// 사용자에게 숫자를 입력값을 받는 함수
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	//num 이 0 인 경우 zero 출력
	if (num == 0) {
		printf("zero");
	} //num 이 1인 경우 one 출력
	else if (num == 1) {
		printf("one");
	} //num 이 2인 경우 two 출력
	else if (num == 2) {
		printf("two");
	} //num 이 0부터 2가 아닌경우 not 0 ~2를 출력함
	else {
		printf("not 0 ~ 2");
	}
}