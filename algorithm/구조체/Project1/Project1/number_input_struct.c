#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[30];
	int age;
	float height;
	char date[40];
}s_list;

int main() {
	printf("학생 건강정보 관리 시스템\n");
	struct student s_list[5] = { 0 };
	int i = 0, result = 0;
	int number = 0;
	printf("학생 수를 입력하세요 :");
	scanf_s("%d", & number);
	for (i = 0; i < number; i++)//5번 반복하는 for문
	{
		printf("이름 입력 : \n"); scanf_s("%s", s_list[i].name, 30); //이름 입력 받아 저장
		printf("나이 입력 : \n"); scanf_s("%d", &s_list[i].age); //나이를 입력 받아 저장
		printf("키 입력 : \n"); scanf_s("%f", &s_list[i].height);
		printf("최종검진일 입력 : \n"); scanf_s("%s", &s_list[i].date,40);
	}

	for (result = 0; result < number; result++) {
		printf("---- %d번째 학생 정보 입력  ---- \n", result + 1);
		printf("이름 = %s, 나이 = %d, 키 = %6.2f, 최종검진일 = %s\n", s_list[result].name, s_list[result].age, s_list[result].height, s_list[result].date);
	}
	return 0;
}

