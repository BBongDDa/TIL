#include <stdio.h>

int main() {
	int a =0;
	int b =0;
	int arr[6];
	printf("주사위 경우의 수 계산 프로그램.. \n");
	printf("주사위를 던질 횟수(2~5)를 입력하세요");
	scanf_s("%d", &a);
	printf("\n출력형식(1~3)을 입력하세요 :");
	scanf_s("%d", &b);
	printf("\n주사위를 %d번 던졌습니다\n", a);

	if (b >= 1 && b <= 3)
	{
		switch (b) {
		case 1:
			printf("주사위를 %d번 던졌을 때 나오는 모든 경우의 수\n", a);
			dice_run1(a, arr);
			break;
		case 2:
			printf("test2");
			break;
		case 3:
			printf("test3");
				break;
		}
	}
	else {
		printf("스펠링 기억안나 error? maybe");
	}
	
	return 0;
}

void dice_run1(int A, int AR[]) {
	
}

void dice_run2() {

}

void dice_run3() {

}