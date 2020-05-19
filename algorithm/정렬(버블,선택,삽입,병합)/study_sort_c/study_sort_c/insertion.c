#include<stdio.h>

//삽입정렬
int main()
{
    printf("정렬대상 정수 5개를 입력하세요: ");
    int arr[5];
    int i, j;
    int key;
    int max = 5;
    //입력
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }
    int size = sizeof(arr);

    //4*5
    if (size == 20) {
        printf("%d", size);
        for (i = 1; i < max; i++) {
            key = arr[i]; // 키 값 지정
            for (j = i - 1; j >= 0 && arr[j] > key; j--) {
                arr[j + 1] = arr[j]; // 정렬대상으로 보내버리기
            }
            arr[j + 1] = key; // 키값 한칸뒤로
        }


        printf("\n결과값 : ");
        for (int i = 0; i < max; i++) {
            printf("%2d", arr[i]);
        }
        return 0;
    }
}