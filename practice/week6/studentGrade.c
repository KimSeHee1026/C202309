#include <stdio.h>
#define STUDENTS 5

// 점수와 성적을 계산하여 분류하는 함수 
void classifyStudents(int scores[], char targetGrade) {
	// A,B,C,D,F 중 하나를 입력하는 함수
	printf("학생 성적 분류: \n");
	// grade 함수 초기화
	char grade = ' ';
	// 성적을 나누는 조건문
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		} 
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		
		//성적과 조건문에 grade 함수 값이 같을 때 출력하는 함수
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
}
}


int main() {
	// 성적 입력값을 저장하는 배열 선언
	int scores[STUDENTS];

	// 학생들 성적 입력 받는 조건문
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	// 버허 임시 저장문
	char ch = getchar();

	// 성적을 분류 받고 싶은 학점을 입력하는 함수
	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오");
	scanf_s("%c", &target, 1);

	// 학생의 성적 분류 및 출력
	classifyStudents(scores, target);

	return 0;
}