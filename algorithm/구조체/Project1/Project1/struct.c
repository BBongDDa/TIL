
#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[12];
	int age;
	double height;
};

 void main() {
		struct student s_list[] = {
			{ "�����", 46, 168.5 },
			{ "���¿�", 45, },
			{ "����", 7, 153.4 },
			{ "����", 58, 162.0 },
			{ "�ֻ��", 41, 185.0 },
			{ "�赿��", },
			{ "�̱Ⳳ", 49, 182.0 },
		};
	for (int i = 0; i <= 6; i++) {
		printf("�̸� = %s, ���� = %d, Ű = %6.2f\n", s_list[i].name, s_list[i].age, s_list[i].height);
	}
	system("pause");
}

