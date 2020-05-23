//#include <stdio.h>
//
////재귀함수 복습 팩토리얼
//
//int factorial(int num);
//
//int main() {
//	int number = 0;
//	int result = 0;
//	printf("\n팩토리얼 계산 대상 정수를 입력하세요 : ");
//	scanf_s("%d", &number);
//	result = factorial(number);
//	printf("\n%d의 팩토리얼 값은 %d입니다\n", number,result);
//	return 0;
//}
//
//int factorial(int num) {
//	if (num == 1) {
//		return 1;
//	}
//	else{
//		return num * factorial(num - 1);
//	}
//}