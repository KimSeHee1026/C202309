#include <stdio.h>

//상수 초기화
#define MAX_TASKS 10 //할 일을 총 10개 까지만 받는다
#define CHAR_NUM 100  //할 일의 글자는 총 100글자 수 까지다

#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM]; //할 일 목록을 저장하는 2차원 배열 생성
int taskCount = 0; // 할 일 수를 저장하는 변수 생성

void addTask() { //할 일 추가하는 함수
	if (taskCount >= MAX_TASKS) { //할 일 수가 다 찼을 경우 출력하는 조건문
		printf("할 일이 다 찼습니다.\n");
		return 0;
	}

	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", tasks[taskCount]); //사용자에게 할 일 입력 후 tasks배열에 저장
	printf("할 일 \"%s\" (이) 가 저장되었습니다. \n", tasks[taskCount]);
	taskCount++; //사용자에게 할 일을 입력받은 후 수를 1개씩 올림
}

void deleteTasks() { //할 일을 입력받고 삭제하는 함수
	if (taskCount == 0) { //할 일이 0개인 경우 출력하는 조건문
		printf("할 일 목록을 수정할 것이 없습니다.");
		return 0;
	}

	print("할 일 목록: \n");
	for (int i = 0; i < taskCount; i++) { //할 일 목록을 출력하는 반복문
		printf("%d. %s\n", i + 1, tasks[i]);
	}

	int delIndex; //삭제 받을 값을 입력받을 변수 생성
	printf("삭제할 일의 번호를 입력해주세요 (1부터 시작): ");
	scanf_s("%d", &delIndex); //삭제 받은 번호 입력값을 delIndex 함수에 연결

	if (delIndex < 1 || delIndex > taskCount) { // delIndex 가 1보다 작거나 10보다 큰경우 출력하는 조건문
		printf("삭제 범위가 벗어났습니다. \n");
		return;
	}

	printf("%d. %s: 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	//삭제 받을 번호 할 일을 삭제
	for (int i = delIndex - 1; i < taskCount - 1; i++) {
		strcpy_s(tasks[i], tasks[i + 1], sizeof(CHAR_NUM));
	}

	taskCount--; //할 일 -1
}

//할 일을 수정하는 함수
void changeTask() {

	int changeTask; //수정 할 일의 번호를 저장하는 변수 생성
	printf("수정할 할 일의 번호를 입력해주세요 (1부터 시작): ");
	scanf_s("%d", &changeTask); //수정 할 일의 번호를 입력받고 changeTask에 저장

	printf("수정할 내용을 입력하세요: ");
	scanf_s("%s", tasks[changeTask - 1]); //수정 할 일의 번호를 입력받고 리스트를 수정
	printf("%d. %s: 할 일이 수정되었습니다.\n", changeTask, tasks[changeTask - 1]);
}

int main() {
	printf("TODO 리스트 시작!\n");

while (1) {
	int choice;

	printf("------------------\n");
	printf("메뉴를 입력해주세요.\n");
	printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
	printf("현재 할 일 수 = %d\n", taskCount);
	printf("------------------\n");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		addTask();
		break;
	case 2:
		deleteTask();
		break;
	case 3:
		printf("할 일 목록:\n");
		for (int i = 0; i < taskCount; i++) {
			printf("%d. %s\n", i + 1, tasks[i]);
		}
		break;
	case 4:
		printf("프로그램을 종료합니다.\n");
		return 0;
	case 5:
		modifyTask();
		break;
	default:
		printf("잘못된 선택입니다. 다시 선택하세요.\n");
		break;
	}
}
}




