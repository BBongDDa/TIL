#include<stdio.h>

//����
int main() {
    printf("���Ĵ�� ���� 5���� �Է��ϼ���: ");
    int arr[5];
        int i, j;
    int min;
    int change;
    int max = 5;
    //�Է�
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }
    int size = sizeof(arr);

    //4*5
    if (size == 20) {
        printf("%d", size);
        for (i = 0; i < max - 1; i++) { //�������� ���� 4��
            min = i;
            for (j = 0; j < max - 1; j++) { 
                if (arr[j] < arr[min]) min = j; //����Ž��
            }
            change = arr[i];
            arr[i] = arr[min];
            arr[min] = change;
        }
    }

    printf("\n����� : "); 
            for (int i = 0; i < max; i++) {
                printf("%2d", arr[i]);
            }
    return 0;
}