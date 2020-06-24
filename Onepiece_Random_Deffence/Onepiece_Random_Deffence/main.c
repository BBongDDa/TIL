#include <stdio.h>
// 원랜디
//원피스 랜덤디펜스 룰렛
int main() {
	int User_choice = 0;
	printf("[원피스 랜덤 디펜스 룰렛]");
	printf("\n초월 >> 1");
	printf("\n불멸 >> 2");
	printf("\n영원 >> 3");
	printf("\n입력하세요 : ");
	scanf_s("%d", &User_choice);
	switch (User_choice)
	{
	case(1) : 
		printf("\n초월을 선택하셨습니다");

		break;
	case(2):
		printf("\n불멸을 선택하셨습니다");
		break;
	case(3):
		printf("\n영원을 선택하셨습니다");
		break;
	default:
		printf("\nError");
		printf("\n숫자를 정확히 입력해주세요");
		main();
		break;
	}
	return 0;
}