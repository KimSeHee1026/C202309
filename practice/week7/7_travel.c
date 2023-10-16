#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// 배열 초기화
char name[NUMPEOPLE][10];
char cities[NUMCITY][10];

// 함수 초기화
void calculateTravelDays();

int main() {

	// 사용자로부터 도시 이름 입력값 받기
	printf("%d개의 도시명을 차례대로 입력해해 주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", name[i], (int)sizeof(name[i]));
	}

	//함수 호출
	calculateTravelDays(name);

	return 0;
}

void calculateTravelDays() {
	//함수 초기화
	int travelDays[NUMCITY][NUMPEOPLE];

	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s 에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], name[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		//함수 선언
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}

		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDays);
	}
}