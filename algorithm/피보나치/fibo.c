#include <stdio.h>



int fibo(int num);



int main(void) {

    int num;

    int i;



    printf("\n피보나치 수 입력 :");

    scanf_s("%d", &num);

    if (num > 10 )
    {

        for (i = 0; i < num; i++) {

            printf("%d ", fibo(i));

        }

        printf("\n\n");



            return 0;
    }
    else {
        printf("10보다 큰 수를 입력하세요\n");
    }


    system("pause");
}


int fibo(int num) {

    if (num == 0) return 0;

    else if (num == 1) return 1;

    else return fibo(num - 1) + fibo(num - 2);

}

