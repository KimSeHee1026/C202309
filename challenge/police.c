#include <stdio.h>
//scanf_s 라고 작성 시 오류 발생
int main(void) {
	//이름을 입력하고 출력하는 함수 생성
	char name[128];
	printf("이름을 입력하시오: ");
	scanf("%s", name, sizeof(name));
	printf("%s\n", name);

	//나이를 입력하고 출력하는 함수 생성
	int age;
	scanf("%d", age);
	printf("%d\n", age);

	//몸무게 입력하고 출력하는 함수 생성
	double weight;
	scanf("%.1lf", weight);
	printf("%.1lf", weight);


	//키를 입력하고 출력하는 함수 생성
	float height;
	scanf("%.0f", height);

	//범죄명 입력하고 출력하는 함수 생성
	char what[512];
	scanf(("%s", what, sizeof(what)));
	printf("%s\n", what);

	return 0;
}