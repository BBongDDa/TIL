#include<stdio.h>

//최대공약수 / 최소공배수

int LCM(int n1, int n2);

int main() {
	int num1 = 0;
	int num2 = 0;
	int LCM_result;
	int GCD_result;
	printf("\n최대공약수, 최소공배수 계산 프로그램\n");
	printf("정수 2개를 숫자가 큰 순서대로 입력하세요 : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	LCM_result = LCM(num1, num2);
	GCD_result = (num1 * num2) / LCM_result;
	printf("\n두수의 최대공약수는 %d\n두수의 최소공배수는 %d\n", LCM_result, GCD_result);

}

int LCM(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	else {
		return LCM(n2, n1 % n2);
	}
	
}