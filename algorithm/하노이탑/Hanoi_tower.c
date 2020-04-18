#include <stdio.h>

void hanoi_run(int num, char start, char center, char finish);

void hanoi_run(int num, char start, char center, char finish)
{
    if (num == 1)
        printf("원판 1가 %c에서 %c로 이동\n", start, finish);
    else
    {
        hanoi_run(num - 1, start, finish, center);
        printf("원판 %d가 %c에서 %c로 이동\n", num, start, finish);
        hanoi_run(num - 1, center, start, finish);
    }
}



int main(void)
{
    int disk_num;
    printf("층 수 입력 - ");
    scanf_s("%d", &disk_num);
    if (disk_num < 10) {
        printf("다시 입력하렴");
    }
    else 
    {
        hanoi_run(disk_num, 'S', 'C', 'F');
        return 0;
    }
}