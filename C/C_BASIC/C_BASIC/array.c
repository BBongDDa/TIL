////#include <stdio.h>
////
////int main() {
////	int array[5] = { 0 };
////	printf("array ���ذ��� %d �Դϴ�", &array);
////
////	return 0;
////}
//
//2���� �迭
//#include "stdio.h"
//#include "stdlib.h��
//void main() {
//	int arrayScore[3][4] = {
//		{ 92, 88, 76, 100 },
//			{ 88, 74, 98, 50 },
//			{ 66, 77, 94, 70 }, };
//	int sum = 100;
//	printf("sum �ּ�=%d, %d\n", &sum, sum);
//	for (int c = 0; c < 3; c++) {
//		int sum = 0;
//		for (int s = 0; s < 4; s++) {
//			printf("%d��, %d��, %d �� \n", c + 1, s + 1, arrayScore[c][s]);
//			sum += arrayScore[c][s];
//		}
//		printf("sum �ּ�=%d, %d\n", &sum, sum);
//		printf("%d�� : ���� = %d��, ��� = %.2f��\n", c + 1, sum, sum / 4.0);
//	}
//	printf("sum �ּ�=%d, %d\n", &sum, sum);
//	system("pause");
//}
//
//
//������ ������ ����
//#include "stdio.h"
//#include "stdlib.h��
//void main() {
//	int x, * p, ** pp;
//	printf("x�� �ּ�=%d, p�� �ּ�=%d, pp�� �ּ�=%d\n", &x, &p, &pp);
//	printf("���� x�� ũ��=%d, �����ͺ��� p�� ũ��=%d, �������� �����ͺ��� pp�� ũ��=%d\n", (int*)sizeof(x), (int*)sizeof(*p), (int*)sizeof(**pp));
//
//	p = &x;
//	pp = &p;
//	x = 10;
//	*p = 20;
//
//	printf("x=%d, p=%d, *p=%d, pp=%d, *pp=%d, **pp=%d\n", x, p, *p, pp, *pp, **pp);
//	system("pause");
//}
//
//�Ǽ��� ������ ����
//#include "stdio.h"
//#include "stdlib.h��
//void main() {
//	float x = 0.0;
//	float* fp;
//	printf("x�� �ּ�=%d, fp�� �ּ�=%d, x=%10.5f \n", &x, &fp, x);
//
//	fp = &x;
//	*fp = 3.1415;
//	printf("x�� �ּ�=%d, fp�� ��=%d, x=%6.4f, fp=%6.4f \n", &x, fp, x, *fp);
//	system("pause");
//}
//
//
//���ڿ� ������ ������ ���ڿ� ó��
//#include "stdio.h"
//void main() {
//	char x[10] = "�赿��";      // ���ڿ� �迭�� �����ּҸ� ���ڿ� �����ͺ����� �Ҵ��� �� ����.
//	char* pchar = NULL;
//	printf("pchar�� �ּ�=%d, *pchar=%s \n", &pchar, pchar);
//	// *pchar = &x;    ���� �߻�, ���ڿ��� ��ü�� �����ͺ���(char *)�̹Ƿ� �������� �Ҵ�޾� ó���ؾ� ��. 
//	pchar = (char*)malloc(sizeof(char) * 10);    // char 10�� ũ�⸸ŭ ���� �޸� �Ҵ�
//	strcpy(pchar, "ȫ�浿");
//	printf("pchar�� ��=%d, *pchar=%s \n", pchar, pchar);
//	pchar = (char*)malloc(sizeof(char) * 10);
//	strcpy(pchar, "���μ�");
//	printf("pchar�� ��=%d, *pchar=%s \n", pchar, pchar);
//	free(pchar);                                 // �޸� ���� ����  
//	printf("pchar�� ��=%d, *pchar=%s \n", pchar, pchar);
//	system("pause");
//}