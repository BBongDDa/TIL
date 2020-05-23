////#include <stdio.h>
////
////int main() {
////	int array[5] = { 0 };
////	printf("array 기준값은 %d 입니다", &array);
////
////	return 0;
////}
//
//2차원 배열
//#include "stdio.h"
//#include "stdlib.h“
//void main() {
//	int arrayScore[3][4] = {
//		{ 92, 88, 76, 100 },
//			{ 88, 74, 98, 50 },
//			{ 66, 77, 94, 70 }, };
//	int sum = 100;
//	printf("sum 주소=%d, %d\n", &sum, sum);
//	for (int c = 0; c < 3; c++) {
//		int sum = 0;
//		for (int s = 0; s < 4; s++) {
//			printf("%d반, %d번, %d 점 \n", c + 1, s + 1, arrayScore[c][s]);
//			sum += arrayScore[c][s];
//		}
//		printf("sum 주소=%d, %d\n", &sum, sum);
//		printf("%d반 : 총점 = %d점, 평균 = %.2f점\n", c + 1, sum, sum / 4.0);
//	}
//	printf("sum 주소=%d, %d\n", &sum, sum);
//	system("pause");
//}
//
//
//정수형 포인터 변수
//#include "stdio.h"
//#include "stdlib.h“
//void main() {
//	int x, * p, ** pp;
//	printf("x의 주소=%d, p의 주소=%d, pp의 주소=%d\n", &x, &p, &pp);
//	printf("변수 x의 크기=%d, 포인터변수 p의 크기=%d, 포인터의 포인터변수 pp의 크기=%d\n", (int*)sizeof(x), (int*)sizeof(*p), (int*)sizeof(**pp));
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
//실수형 포인터 변수
//#include "stdio.h"
//#include "stdlib.h“
//void main() {
//	float x = 0.0;
//	float* fp;
//	printf("x의 주소=%d, fp의 주소=%d, x=%10.5f \n", &x, &fp, x);
//
//	fp = &x;
//	*fp = 3.1415;
//	printf("x의 주소=%d, fp의 값=%d, x=%6.4f, fp=%6.4f \n", &x, fp, x, *fp);
//	system("pause");
//}
//
//
//문자열 포인터 변수로 문자열 처리
//#include "stdio.h"
//void main() {
//	char x[10] = "김동수";      // 문자열 배열의 시작주소를 문자열 포인터변수에 할당할 수 없음.
//	char* pchar = NULL;
//	printf("pchar의 주소=%d, *pchar=%s \n", &pchar, pchar);
//	// *pchar = &x;    에라 발생, 문자열은 자체가 포인터변수(char *)이므로 동적으로 할당받아 처리해야 함. 
//	pchar = (char*)malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
//	strcpy(pchar, "홍길동");
//	printf("pchar의 값=%d, *pchar=%s \n", pchar, pchar);
//	pchar = (char*)malloc(sizeof(char) * 10);
//	strcpy(pchar, "강민수");
//	printf("pchar의 값=%d, *pchar=%s \n", pchar, pchar);
//	free(pchar);                                 // 메모리 공간 해제  
//	printf("pchar의 값=%d, *pchar=%s \n", pchar, pchar);
//	system("pause");
//}