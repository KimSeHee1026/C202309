#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생 수 상수 생정의
#define STUDENTS 50

// 구조체 생성
struct std_Info {
    char name[50];  //이름을 문자열로 저장하기 위해 배열로 변경
    int scores;
    int std_num;
};

// 함수 원형 
void nameInfo(struct std_Info* student);
void scoresInfo(struct std_Info* student);
void classifyStudents(struct std_Info* students, char targetGrade);
void sumScores(struct std_Info* students);
void printRanks(struct std_Info* students);

int main() {
    int input_std_num; // 학생 수 입력 변수

    // 사용자에게 학생 수 입력 받기
    printf("학생 수를 입력하세요 (최대 %d명): ", STUDENTS);
    scanf_s("%d", &input_std_num);

    if (input_std_num <= 0 || input_std_num > STUDENTS) {
        printf("올바르지 않은 학생 수입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    // 구조체 포인터를 사용하여 동적으로 배열 할당
    struct std_Info* students = (struct std_Info*)malloc(input_std_num * sizeof(struct std_Info));

    if (students == NULL) {
        printf("메모리 할당 오류. 프로그램을 종료합니다.\n");
        return 1;
    }

    // 학생들 이름 및 점수 입력 받기
    for (int i = 0; i < input_std_num; i++) {
        printf("학생 %d의 정보를 입력하세요:\n", i + 1);
        nameInfo(&students[i]);   // 이름 입력 함수 호출
        scoresInfo(&students[i]); // 점수 입력 함수 호출
    }

    // 성적을 분류 받고 싶은 학점을 입력하는 함수
    char target;
    printf("특정 점수 (A,B,C,D,F)를 입력하시오\n");
    scanf_s(" %c", &target); // 공백을 추가하여 이전 입력 버퍼를 비우도록 함

    // 학생의 성적 분류 및 출력
    classifyStudents(students, target);
    sumScores(students);
    printRanks(students);

    // 동적 할당된 메모리 해제
    free(students);

    return 0;
}

// 학생의 이름을 입력하는 함수
void nameInfo(struct std_Info* student) {
    printf("이름: ");
    scanf_s("%s", student->name, (int)sizeof(&(student->name)));
}

// 학생의 성적을 입력하는 함수
void scoresInfo(struct std_Info* student) {
    printf("성적: ");
    scanf_s("%d", &(student->scores), (int)sizeof(&(student->scores)));
}

// 나머지 함수들에서 구조체 멤버 변수를 불러와 동작하게끔 수정
void classifyStudents(struct std_Info* students, char targetGrade) {
    printf("학생 성적 분류:\n");

    for (int i = 0; i < STUDENTS; i++) {
        char grade = ' ';

        if (students[i].scores >= 90) {
            grade = 'A';
        }
        else if (students[i].scores >= 80) {
            grade = 'B';
        }
        else if (students[i].scores >= 70) {
            grade = 'C';
        }
        else if (students[i].scores >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        if (targetGrade == grade) {
            printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
        }
    }
}

//학생들의 점수 총합과 평균을 출력하는 함수
void sumScores(struct std_Info* students) {
    int all_sum = 0;

    for (int i = 0; i < STUDENTS; i++) {
        all_sum += students[i].scores;
    }

    double all_average = (double)all_sum / STUDENTS;
    printf("학생들 점수의 총 합은 %d 이고. 평균 값은 %f 입니다.\n", all_sum, all_average);
}

// 학생들 순위 출력하는 함수
void printRanks(struct std_Info* students) {
    for (int i = 0; i < STUDENTS; i++) {
        int ran = 0;
        // 다른 학생들과 비교하여 순위 결정
        for (int j = 0; j < STUDENTS; j++) {
            if (students[i].scores >= students[j].scores) {
                ran += 1;
            }
        }

        printf("%s 학생의 순위는 %d위 입니다.\n", students[i].name, ran);
    }
}
