#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[30];
	int age;
	float height;
}s_list;

int main() {
	printf("�л� �ǰ����� ���� �ý���\n");
	struct student s_list[5] = { 0 };
    int i=0, result=0;
    for (i = 0; i < 5; i++)//5�� �ݺ��ϴ� for��
    {
        printf("�̸� �Է� : \n"); scanf_s("%s", s_list[i].name,30); //�̸� �Է� �޾� ����
        printf("���� �Է� : \n"); scanf_s("%d", &s_list[i].age); //���̸� �Է� �޾� ����
        printf("Ű �Է� : \n"); scanf_s("%f", &s_list[i].height);
    }

	for (result = 0; result < 5; result++) {
		printf("---- %d��° �л� ���� �Է�  ---- \n", result + 1);
		printf("�̸� = %s, ���� = %d, Ű = %6.2f\n", s_list[result].name, s_list[result].age, s_list[result].height);
	}
	return 0;
}

