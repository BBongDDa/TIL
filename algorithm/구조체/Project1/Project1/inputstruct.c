#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[30];
	int age;
	float height;
}s_list;

int main() {
	printf("학생 건강정보 관리 시스템\n");
	struct student s_list[5] = { 0 };
    int i=0, result=0;
    for (i = 0; i < 5; i++)//5번 반복하는 for문
    {
        printf("이름 입력 : \n"); scanf_s("%s", s_list[i].name,30); //이름 입력 받아 저장
        printf("나이 입력 : \n"); scanf_s("%d", &s_list[i].age); //나이를 입력 받아 저장
        printf("키 입력 : \n"); scanf_s("%f", &s_list[i].height);
    }

	for (result = 0; result < 5; result++) {
		printf("---- %d번째 학생 정보 입력  ---- \n", result + 1);
		printf("이름 = %s, 나이 = %d, 키 = %6.2f\n", s_list[result].name, s_list[result].age, s_list[result].height);
	}
	return 0;
}

