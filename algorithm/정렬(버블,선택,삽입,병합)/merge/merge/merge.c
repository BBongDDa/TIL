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
        /* ���� ���ĵ� list�� �պ� */
        while (i <= mid && j <= right) {
            if (list[i] <= list[j])
                sorted10[k++] = list[i++];
            else
                sorted10[k++] = list[j++];
        }

        // ���� �ִ� ������ �ϰ� ����
        if (i > mid) {
            for (l = j; l <= right; l++)
                sorted10[k++] = list[l];
        }
        // ���� �ִ� ������ �ϰ� ����
        else {
            for (l = i; l <= mid; l++)
                sorted10[k++] = list[l];
        }

        // �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
        for (l = left; l <= right; l++) {
            list[l] = sorted10[l];
        }
        break;
    
         
    default:
        break;
    }

   

// �պ� ����
    void merge_sort(int list[], int left, int right, int size1) {
    int mid;
    

    if (left < right) {
        mid = (left + right) / 2; // �߰� ��ġ�� ����Ͽ� ����Ʈ�� �յ� ���� -����(Divide)
            merge_sort(list, left, mid, size1); // ���� �κ� ����Ʈ ���� -����(Conquer)
        merge_sort(list, mid + 1, right, size1); // ���� �κ� ����Ʈ ���� -����(Conquer)
        merge(list, left, mid, right, size1); // ���ĵ� 2���� �κ� �迭�� �պ��ϴ� ���� -����(Combine)
    }
}

void main() {
    printf("�������� ���α׷�\n");
    printf("���Ĵ�� ������ ������ �Է��ϼ��� ���� : 10, 20, 30\n");
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
        printf("���� ��� ���� 10���� �Է��ϼ���");
        for (z10 = 0; z10 < 10; z10++) {
            scanf_s("%d", &list10[z10]);
        }
        // �պ� ���� ����(left: �迭�� ���� = 0, right: �迭�� �� = 7)
        merge_sort( list10, 0, MAX_SIZE10-1,MAX_SIZE10);

        // ���� ��� ���
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