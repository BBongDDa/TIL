#include<stdio.h>

//�ִ����� / �ּҰ����

int LCM(int n1, int n2);

int main() {
	int num1 = 0;
	int num2 = 0;
	int LCM_result;
	int GCD_result;
	printf("\n�ִ�����, �ּҰ���� ��� ���α׷�\n");
	printf("���� 2���� ���ڰ� ū ������� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	LCM_result = LCM(num1, num2);
	GCD_result = (num1 * num2) / LCM_result;
	printf("\n�μ��� �ִ������� %d\n�μ��� �ּҰ������ %d\n", LCM_result, GCD_result);

}

int LCM(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	else {
		return LCM(n2, n1 % n2);
	}
	
}