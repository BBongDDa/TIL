#include <stdio.h>

int main() {
	int a =0;
	int b =0;
	int arr[6];
	printf("�ֻ��� ����� �� ��� ���α׷�.. \n");
	printf("�ֻ����� ���� Ƚ��(2~5)�� �Է��ϼ���");
	scanf_s("%d", &a);
	printf("\n�������(1~3)�� �Է��ϼ��� :");
	scanf_s("%d", &b);
	printf("\n�ֻ����� %d�� �������ϴ�\n", a);

	if (b >= 1 && b <= 3)
	{
		switch (b) {
		case 1:
			printf("�ֻ����� %d�� ������ �� ������ ��� ����� ��\n", a);
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
		printf("���縵 ���ȳ� error? maybe");
	}
	
	return 0;
}

void dice_run1(int A, int AR[]) {
	
}

void dice_run2() {

}

void dice_run3() {

}