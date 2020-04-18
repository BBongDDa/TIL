#include <stdio.h>

void hanoi_run(int num, char start, char center, char finish);

void hanoi_run(int num, char start, char center, char finish)
{
    if (num == 1)
        printf("���� 1�� %c���� %c�� �̵�\n", start, finish);
    else
    {
        hanoi_run(num - 1, start, finish, center);
        printf("���� %d�� %c���� %c�� �̵�\n", num, start, finish);
        hanoi_run(num - 1, center, start, finish);
    }
}



int main(void)
{
    int disk_num;
    printf("�� �� �Է� - ");
    scanf_s("%d", &disk_num);
    if (disk_num < 10) {
        printf("�ٽ� �Է��Ϸ�");
    }
    else 
    {
        hanoi_run(disk_num, 'S', 'C', 'F');
        return 0;
    }
}