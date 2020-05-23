#include <stdio.h>

/*
백준 단계별 풀기 2020_01_13 ~
*/

// 입출력
void num2557() {
	printf("Hello World!");
}

void num10718() {
    printf("강한친구 대한육군\n강한친구 대한육군");
}

void num10171() {
	printf("\\    /\\ \n )  ( ')\n(  /  )\n \\(__)|\n");
}

void num10172() {
    printf("|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\ \n|\"^\"`    |\n||_/=\\\\__| ");
}

void num1000() {
    int A;
    int B;
    scanf_s("%d\n", &A);
    scanf_s("%d\n", &B);
    printf("%d\n" , A + B);
}

void num10869() {
    int a;
    int b;
    scanf_s("%d\n", &a);
    scanf_s("%d\n", &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
}

void num10430() {
       int A, B, C;

        scanf("%d %d %d", &A, &B, &C);

        printf("%d\n", (A + B) % C);

        printf("%d\n", (A % C + B % C) % C);

        printf("%d\n", (A * B) % C);

        printf("%d\n", (A % C * B % C) % C);
}

// if문

void num1330() {
    int A;
    int B;
    scanf_s("%d", &A);
    scanf_s("%d", &B);
    if (A > B) {
        printf(">");
    }
    if (A < B) {
        printf("<");
    }
    if (A == B) {
        printf("==");
    }
}

void num9498() {
    int score;
    scanf_s("%d", &score);
    if (score <= 100 && score >= 90) {
        printf("A");
    }
    if (score <= 89 && score >= 80) {
        printf("B");
    }
    if (score <= 79 && score >= 70) {
        printf("C");
    }
    if (score <= 69 && score >= 60) {
        printf("D");
    }
    if (score <= 59 && score >= 0) {
        printf("F");
    }

}

void num2884() {
    int a, b;
    scanf_s("%d %d", &a, &b);
    if (b < 45)
    {
        b += 60;
        a--;
        if (a < 0) a = 23;
    };
    printf("%d %d", a, b - 45);
}

// for문

void num2739() {
    int N = 0, i = 0;
    scanf_s("%d", &N);
    if (N < 1 && N > 9) {
        printf("1 ~ 9 사이의 정수값을 입력하세요\n");
    }
    else {
        for (i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", N, i, N * i);
        }
    }
}

int main() {

    return 0;
}