#include <stdio.h>

// 상수 초기화
#define NUMCITY 3
#define NUMPEOPLE 2

//여행자 이름, 도시 이름 배열 초기화

char name[NUMPEOPLE][10];
char cities[NUMCITY][10];

//function 초기화 정리
int getSum(int numArrary[], int length);
double getAverage(double numArrary[], int length);
void printFamousCity(double dayArray[], int length);
void calculateTravelDays(char name[NUMPEOPLE][10]);


//사용자가 도시에서 보낸 일수를 입력하고 배열에 저장하는 함수
void calculateTravelDays(char name[NUMPEOPLE][10]) {
	//함수 초기화
	int travelDays[NUMCITY][NUMPEOPLE];
	//사용자의 입력값을 배열에 넣는 조건문 생성
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s 에서 사람 %s 가 보낸 일 수를 입력하세요: ", cities[i], name[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	//도시에서 총 일수 및 평균 일 수를 계산하고 출력하는 함수
	for (int i = 0; i < NUMCITY; i++) {
		// 총 일 수 계산
		int totalDays = getSum(travelDays[i], NUMPEOPLE);
		// 도시의 평균 일수 계산
		float averageDays = getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s 에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDays, averageDays);
	}
	// 가장 인기 있는 도시 출력 함수
	printFamousCity(travelDays[0], NUMPEOPLE);
}
	// 배열들의 합을 계산하는 함수
	int getSum(int numArray[], int length) {
		int totalDays = 0;
		for (int i = 0; i < length; i++) {
			totalDays += numArray[i];
		}
		return totalDays;
	}
	// 배열들의 평균을 계산한는 함수
	double getAverage(int numArray[], int length) {
		int totalDays = getSum(numArray, length);
		return (double)totalDays / length;
	}
	// 인기있는 도시를 출력하는 함수
	void printFamousCity(double dayArray[], int length) {
		// 가장 높은 평균 일수 찾는 변수 초기화
		double maxDay = 0;
		int maxDayIndex = 0;

		//각 도시의 평균 일수 비교
		for (int i = 0; i < length; i++) {
			if (dayArray[i] > maxDay) {
				maxDay = dayArray[i];
				maxDayIndex = i;
			}
		}

		//인기있는 도시 출력
		printf("평균 일 기준으로 가장 인기 있는 도시는 %s 입니다. (평균 머문 일: %.2f)\n", cities[maxDayIndex], maxDay);
	}
