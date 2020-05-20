
#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[12];
	int age;
	double height;
};

 void main() {
		struct student s_list[] = {
			{ "문경수", 46, 168.5 },
			{ "노태우", 45, },
			{ "문정", 7, 153.4 },
			{ "권정", 58, 162.0 },
			{ "최상균", 41, 185.0 },
			{ "김동승", },
			{ "이기남", 49, 182.0 },
		};
	for (int i = 0; i <= 6; i++) {
		printf("이름 = %s, 나이 = %d, 키 = %6.2f\n", s_list[i].name, s_list[i].age, s_list[i].height);
	}
	system("pause");
}

