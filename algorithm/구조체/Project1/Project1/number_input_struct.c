#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[30];
	int age;
	float height;
	char date[40];
}s_list;

int main() {
	printf("�л� �ǰ����� ���� �ý���\n");
	struct student s_list[5] = { 0 };
	int i = 0, result = 0;
	int number = 0;
	printf("�л� ���� �Է��ϼ��� :");
	scanf_s("%d", & number);
	for (i = 0; i < number; i++)//5�� �ݺ��ϴ� for��
	{
		printf("�̸� �Է� : \n"); scanf_s("%s", s_list[i].name, 30); //�̸� �Է� �޾� ����
		printf("���� �Է� : \n"); scanf_s("%d", &s_list[i].age); //���̸� �Է� �޾� ����
		printf("Ű �Է� : \n"); scanf_s("%f", &s_list[i].height);
		printf("���������� �Է� : \n"); scanf_s("%s", &s_list[i].date,40);
	}

	for (result = 0; result < number; result++) {
		printf("---- %d��° �л� ���� �Է�  ---- \n", result + 1);
		printf("�̸� = %s, ���� = %d, Ű = %6.2f, ���������� = %s\n", s_list[result].name, s_list[result].age, s_list[result].height, s_list[result].date);
	}
	return 0;
}

