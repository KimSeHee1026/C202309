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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}
// 학생들 성적의 총합을 계산하는 함수
void sumScores(int scores[]) {
	// 함수 초기화
	int all_sum = 0;
	int sum_result;
	double all_average;

	// 반복문을 통해 배열에 있는 모든 수를 총합하는 함수
	for (int i = 0; i < STUDENTS; i++) {
		all_sum += scores[i];
		sum_result = all_sum;
	}
	// 총합 함수를 통해 평균을 계산하는 함수
	all_average = sum_result / STUDENTS;
	printf("학생들 점수의 총 합은 %d 이고. 평균 값은 %f 입니다.\n", sum_result, all_average);

}

// 학생들 성적의 순위를 매기는 함수
void printRanks() {

	// 함수 i 초기화 후 랭크를 구하기 위해 상대방이 나보다 큰경우 순위를 하나씩 올리는 반목문
	for (int i = 0; i < STUDENTS; i++) {
		int ran = 1;
		for (int j = 0; j < STUDENTS;j++) {
			if (i <= j) {
				ran += 1;
			}
		}
		//학생 순위 출력
		printf("%d학생의 순위는 %d 입니다.\n",i + 1, ran);
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
	printf("특정 점수 (A,B,C,D,F)를 입력하시오\n");
	scanf_s("%c", &target, 1);

	// 학생의 성적 분류 및 출력
	classifyStudents(scores, target);
	sumScores(scores);
	printRanks(scores);

	return 0;
}