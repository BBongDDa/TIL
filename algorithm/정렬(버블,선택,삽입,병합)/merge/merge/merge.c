#include <stdio.h>
#define MAX_SIZE10 10
#define MAX_SIZE20 20
#define MAX_SIZE30 30




void merge(int list[], int left, int mid, int right, int size) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;
    int sorted10[10], sorted20[20], sorted30[30];
    switch (size)
    {
    case 10:
        /* 분할 정렬된 list의 합병 */
        while (i <= mid && j <= right) {
            if (list[i] <= list[j])
                sorted10[k++] = list[i++];
            else
                sorted10[k++] = list[j++];
        }

        // 남아 있는 값들을 일괄 복사
        if (i > mid) {
            for (l = j; l <= right; l++)
                sorted10[k++] = list[l];
        }
        // 남아 있는 값들을 일괄 복사
        else {
            for (l = i; l <= mid; l++)
                sorted10[k++] = list[l];
        }

        // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
        for (l = left; l <= right; l++) {
            list[l] = sorted10[l];
        }
        break;
    
         
    default:
        break;
    }

   

// 합병 정렬
    void merge_sort(int list[], int left, int right, int size1) {
    int mid;
    

    if (left < right) {
        mid = (left + right) / 2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
            merge_sort(list, left, mid, size1); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
        merge_sort(list, mid + 1, right, size1); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
        merge(list, left, mid, right, size1); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
    }
}

void main() {
    printf("병합정렬 프로그램\n");
    printf("정렬대상 정수의 개수를 입력하세요 단위 : 10, 20, 30\n");
    int i;
    int choice;
    int list10[10];
    int list20[20];
    int list30[30];
    int z10 , z11;
    int z20;
    int z30;
    scanf_s("%d", &choice);
    switch (choice)
    {

    case 10:
        printf("정렬 대상 정수 10개를 입력하세요");
        for (z10 = 0; z10 < 10; z10++) {
            scanf_s("%d", &list10[z10]);
        }
        // 합병 정렬 수행(left: 배열의 시작 = 0, right: 배열의 끝 = 7)
        merge_sort( list10, 0, MAX_SIZE10-1,MAX_SIZE10);

        // 정렬 결과 출력
        for (i = 0; i < MAX_SIZE10; i++) {
            printf("%d\n", list10[i]);
        }
     break;

    case 20:
        printf("20");
        break;

    case 30:
        printf("30");
        break;

    default:
        printf("Error");
        break;
    }


}