#include <stdio.h>

//����
int main() {

    int arr[5];
    int i, j;
    int change; // �� �� �ٲ� ��
    int num5 = 5;

    printf("���Ĵ�� ���� 5���� �Է��ϼ���: ");
    
    //�Է�
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }
    int size = sizeof(arr);

    //4*5
    if (size == 20) {
        printf("%d", size);
        // ������ ���� ���� num5 - 1
        for (int i = 0; i < num5 - 1; i++) {
            for (int j = 0; j < num5 - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    change = arr[j];
                    arr[j] = arr[j + 1];  //swap�� ���� ������ ����� �ȳ���..
                    arr[j + 1] = change;
                }
            }
        } 
        //���
        printf("\n����� : ");
        for (int i = 0; i < num5; i++) {
            printf("%2d", arr[i]);
        }
        return 0;
    }
    // �۵�x..
    else {
        printf("error");
    }
   
    return 0;

}