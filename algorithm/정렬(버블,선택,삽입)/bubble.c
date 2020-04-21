#include <stdio.h>

//버블
int main() {

    int arr[5];
    int i, j;
    int change; // 두 값 바꿀 때
    int num5 = 5;

    printf("정렬대상 정수 5개를 입력하세요: ");
    
    //입력
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }
    int size = sizeof(arr);

    //4*5
    if (size == 20) {
        printf("%d", size);
        // 마지막 정수 제외 num5 - 1
        for (int i = 0; i < num5 - 1; i++) {
            for (int j = 0; j < num5 - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    change = arr[j];
                    arr[j] = arr[j + 1];  //swap을 쓰고 싶은데 기억이 안나요..
                    arr[j + 1] = change;
                }
            }
        } 
        //출력
        printf("\n결과값 : ");
        for (int i = 0; i < num5; i++) {
            printf("%2d", arr[i]);
        }
        return 0;
    }
    // 작동x..
    else {
        printf("error");
    }
   
    return 0;

}