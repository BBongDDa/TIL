#include <stdio.h>
// ������
//���ǽ� �������潺 �귿
int main() {
	int User_choice = 0;
	printf("[���ǽ� ���� ���潺 �귿]");
	printf("\n�ʿ� >> 1");
	printf("\n�Ҹ� >> 2");
	printf("\n���� >> 3");
	printf("\n�Է��ϼ��� : ");
	scanf_s("%d", &User_choice);
	switch (User_choice)
	{
	case(1) : 
		printf("\n�ʿ��� �����ϼ̽��ϴ�");

		break;
	case(2):
		printf("\n�Ҹ��� �����ϼ̽��ϴ�");
		break;
	case(3):
		printf("\n������ �����ϼ̽��ϴ�");
		break;
	default:
		printf("\nError");
		printf("\n���ڸ� ��Ȯ�� �Է����ּ���");
		main();
		break;
	}
	return 0;
}