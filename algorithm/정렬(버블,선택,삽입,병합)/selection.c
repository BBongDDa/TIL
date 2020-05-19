#include<stdio.h>

//선택
int main() {
    printf("정렬대상 정수 5개를 입력하세요: ");
    int arr[5];
        int i, j;
    int min;
    int change;
    int max = 5;
    //입력
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }
    int size = sizeof(arr);

    //4*5
    if (size == 20) {
        printf("%d", size);
        for (i = 0; i < max - 1; i++) { //마지막꺼 제외 4번
            min = i;
            for (j = 0; j < max - 1; j++) { 
                if (arr[j] < arr[min]) min = j; //선형탐색
            }
            change = arr[i];
            arr[i] = arr[min];
            arr[min] = change;
        }
    }

    printf("\n결과값 : "); 
            for (int i = 0; i < max; i++) {
                printf("%2d", arr[i]);
            }
    return 0;
}