#include <stdio.h>
#define MAX_SIZE10 10
#define MAX_SIZE20 20
#define MAX_SIZE30 30




void merge(int list[], int left, int mid, int right, int size) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;
    int sorted10[10] = { 0 };
    int sorted20[20] = { 0 };
    int sorted30[30] = { 0 };
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

    case 20:
        /* ���� ���ĵ� list�� �պ� */
        while (i <= mid && j <= right) {
            if (list[i] <= list[j])
                sorted20[k++] = list[i++];
            else
                sorted20[k++] = list[j++];
        }

        // ���� �ִ� ������ �ϰ� ����
        if (i > mid) {
            for (l = j; l <= right; l++)
                sorted20[k++] = list[l];
        }
        // ���� �ִ� ������ �ϰ� ����
        else {
            for (l = i; l <= mid; l++)
                sorted20[k++] = list[l];
        }

        // �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
        for (l = left; l <= right; l++) {
            list[l] = sorted20[l];
        }
        break;

    case 30:
        /* ���� ���ĵ� list�� �պ� */
        while (i <= mid && j <= right) {
            if (list[i] <= list[j])
                sorted30[k++] = list[i++];
            else
                sorted30[k++] = list[j++];
        }

        // ���� �ִ� ������ �ϰ� ����
        if (i > mid) {
            for (l = j; l <= right; l++)
                sorted30[k++] = list[l];
        }
        // ���� �ִ� ������ �ϰ� ����
        else {
            for (l = i; l <= mid; l++)
                sorted30[k++] = list[l];
        }

        // �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
        for (l = left; l <= right; l++) {
            list[l] = sorted30[l];
        }
        break;

    default:
        break;
    }
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

int main() {
    printf("�������� ���α׷�\n");
    printf("���Ĵ�� ������ ������ �Է��ϼ��� ���� : 10, 20, 30\n");
    int i;
    int choice;
    int list10[10] = { 0 };
    int list20[20] = { 0 };
    int list30[30] = { 0 };
    int z10 , z11;
    int z20;
    int z30;
    scanf_s("%d", &choice);
    if ( choice == 10)
    {
        printf("���� ��� ���� 10���� �Է��ϼ���");
        for (z10 = 0; z10 < 10; z10++) {
            scanf_s("%d", &list10[z10]);
            printf("%d�� �Էµ�", z10+1);
        }
        // �պ� ���� ����(left: �迭�� ���� = 0, right: �迭�� �� = 7)
        merge_sort(list10, 0, 9, MAX_SIZE10);

        // ���� ��� ���
        printf("���İ�� : \n");
        for (i = 0; i < MAX_SIZE10; i++) {
            printf("%d\n", list10[i]);
        }

        return 0;
    }
    else if (choice == 20)
    {
        printf("���� ��� ���� 20���� �Է��ϼ���");
        for (z20 = 0; z20 < 20; z20++) {
            scanf_s("%d", &list20[z20]);
            printf("%d�� �Էµ�", z20 + 1);
        }
  
        merge_sort(list20, 0, 19, MAX_SIZE20);

        // ���� ��� ���
        printf("���İ�� : \n");
        for (i = 0; i < MAX_SIZE20; i++) {
            printf("%d\n", list20[i]);
        }

        return 0;
    }
    if (choice == 30)
    {
        printf("���� ��� ���� 30���� �Է��ϼ���");
        for (z30 = 0; z30 < 30; z30++) {
            scanf_s("%d", &list30[z30]);
            printf("%d�� �Էµ�", z30 + 1);
        }

        merge_sort(list30, 0, 29, MAX_SIZE30);

        // ���� ��� ���
        printf("���İ�� : \n");
        for (i = 0; i < MAX_SIZE30; i++) {
            printf("%d\n", list30[i]);
        }

        return 0;
    }
}