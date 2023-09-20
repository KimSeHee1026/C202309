#include <stdio.h>

int main() {
	// int에 choice 함수를 초기화
	int choice;

	// 사용자에게 입력값을 받기 위한 설명문
	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");

	// 사용자에게 입력값을 받는 함수
	scanf_s("%d", &choice);

	// choice가 1인경우 "파일을 저장합니다." 출력
	if (choice == 1) {
		printf("파일을 저장합니다.");
	} // choice가 2인경우 "저장 없이 닫습니다." 출력
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	} // choice가 3인경우 "종료합니다." 출력
	else if (choice == 3) {
		printf("종료합니다.");
	} // choice가 1~3이 아닌경우 "잘못 입력하셨습니다." 출력
	else {
		printf("잘못 입력하셨습니다.");;
	}
}