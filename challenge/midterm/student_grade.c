#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

double std_total; //점수 총합을 저장하는 변수 정의
double sub_total; //과목 총합을 저장하는 변수 정의

//학생 별 평균을 구하는 함수
double StdAvgScore(double studentScores[STUDENTS][SUBJECTS], char studentNames[STUDENTS][CHARNUM]) {
	for (int i = 0; i < STUDENTS; i++) { //학생 수 만큼 5번 반복하는 반복문
		double std_total = 0;
		for (int j = 0; j < SUBJECTS; j++) { //과목 수 만큼 3번 반복하는 반복문
			std_total += studentScores[i][j]; //stdTotal에 리스트에 있는 점수를 하나씩 더하여 저장
		}
		std_total = std_total / SUBJECTS; //평균을 구함
		printf("\t%s의 평균 점수: %.2lf\n", studentNames[i], std_total); //사용자에게 학생의 평균 점수를 출력
	}
	return std_total;
}

//과목 별 평균을 구하는 함수
double SubAvgScore(double studentScores[STUDENTS][SUBJECTS], char subjectNames[SUBJECTS][CHARNUM]) {
	for (int i = 0; i < SUBJECTS; i++) { //과목 수 만큼 3번 반복하는 반복문
		double sub_total = 0;
		for (int j = 0; j < STUDENTS; j++) { //학생 수 만큼 5번 반복하는 반복문
			sub_total += studentScores[j][i];//학생 수만큼 5번 리스트에서 과목 점수를 꺼내 와 저장
		}
		sub_total = sub_total / STUDENTS; //평균을 구함
		printf("\t%s의 평균 점수는 %.2lf 입니다. \n", subjectNames[i], sub_total);
	}
	return sub_total;
}


int main(void) {
	char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // 학생 이름이 저장될 배열
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // 학생의 시험 별 성적이 점수가 저장될 배열
	printf("학생 %d명의 이름의 입력을 시작합니다. \n", STUDENTS);

	// TODO 1.1: 학생 이름을 입력받는 코드 블록 작성
	for (int i = 0; i < STUDENTS; i++) {
		printf("%d번째 학생의 이름을 입력하세요: ", i + 1);
		scanf_s("%s", &studentNames[i], (int)sizeof(studentNames[i]));
	}


	// 입력된 학생 이름이 잘 저장되었는지 확인하는 코드 블록
	printf("학생 이름이 모두 입력되었습니다. \n");
	printf("입력된 학생 이름은 다음과 같습니다. \n");
	for (int i = 0; i < STUDENTS; i++) { //학생 수 만큼 이름을 입력값으로 받는 반복분 설정
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) { //이름 중간중간에 ','를 넣음
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("각 학생의 %s, %s, %s 점수를 차례대로 입력해주세요. (띄어쓰기 구분)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

	
	for (int i = 0; i < STUDENTS; i++) { //학생 수 만큼 5번 반복하는 반복문
		printf("\t%s의 성적: ", studentNames[i]);
		for (int j = 0; j < SUBJECTS; j++) { //과목 수 만큼  3번반복하여 studentScores 리스트에 저장함
			scanf_s("%lf", &studentScores[i][j]); //사용자에게 점수를 입력받음
		}
	}

	printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");
	printf("--------------------\n");
	printf("학생 별 성적은 다음과 같습니다 \n");

	double come_std_avgscore; //StdAvgScore 함수를 불러 올 변수 정의
	come_std_avgscore = StdAvgScore(studentScores, studentNames); //StdAvgScore 함수를 불러옴

	printf("--------------------\n");
	printf("과목 별 평균 점수는 아래와 같습니다. \n");

	double come_subscore; //StdAvgScore 함수를 불러 올 변수 정의
	come_subscore = SubAvgScore(studentScores, subjectNames); //SubAvgScore 함수를 불러옴

	printf("프로그램을 종료합니다. ");
	return 0;
}