#include <stdio.h>


void num1() {
	int arr[3];
	int S, i, j;
	int change;

	printf("문제1번\n");
	printf("정렬대상 숫자 3개를 입력하세요");

	for (S = 0; S < 3; S++) {
		scanf_s("%d", &arr[S]);
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (arr[j] > arr[j + 1]){
				change = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = change;
				}
		}
	}

	printf("\n정렬결과 : ");
	printf("%d ", arr[0]);
	printf("%d ", arr[1]);
	printf("%d ", arr[2]);

}
 

void num2() {
	int arr0[3];
	int arr[3];
	int change;
	int change2;
	int i=0;
	int j;
	int k;
	int check=0;

	
	printf("문제 2번\n");
	printf("정수 A를 입력하세요");

	printf("\n백의자리");
	scanf_s("%d", &arr0[0]);
	printf("\n십의자리");
	scanf_s("%d", &arr0[1]);
	printf("\n일의자리");
	scanf_s("%d", &arr0[2]);

	for (j = 0; j < 3; j++) {
		arr0[i] = arr[i];
	}
	
	for (i=0; i <2; i++)
	if (arr[i] > arr[i+1]) {
		change = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = change;
	}

	if (arr[1] > arr[2]) {
		change2 = arr[1];
		arr[1] = arr[2];
		arr[2] = change;
	}

	for (k = 0; k < 3; k++) {
		if (arr0[k] == arr[k])
			check++;
	}
	if (check == 3) {
		arr[0] =+ 1;
		printf("d");
	}
	else {
		printf("d");
	}

}

int main() {
	num2();
	return 0;{
	}
}