#include<stdio.h>

//��������
int main()
{
    printf("���Ĵ�� ���� 5���� �Է��ϼ���: ");
    int arr[5];
    int i, j;
    int key;
    int max = 5;
    //�Է�
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }
    int size = sizeof(arr);

    //4*5
    if (size == 20) {
        printf("%d", size);
        for (i = 1; i < max; i++) {
            key = arr[i]; // Ű �� ����
            for (j = i - 1; j >= 0 && arr[j] > key; j--) {
                arr[j + 1] = arr[j]; // ���Ĵ������ ����������
            }
            arr[j + 1] = key; // Ű�� ��ĭ�ڷ�
        }


        printf("\n����� : ");
        for (int i = 0; i < max; i++) {
            printf("%2d", arr[i]);
        }
        return 0;
    }
}