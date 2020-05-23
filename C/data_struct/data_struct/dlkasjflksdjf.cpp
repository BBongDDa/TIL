#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stack>
#include <queue>
using namespace std;

//스택과 큐 라이브러리를 사용하기 위해 c++로 작성했습니다!
int main(void) {
    srand((unsigned int)time(NULL));
    stack<int> LIFO;
    queue<int> FIFO;
    int D;
    int number;
    //설명, 유저의 선택받기
    printf("스택과 큐 프로그래밍 과제\n");
    printf("스택 출력 >> 1\n");
    printf("큐 출력 >> 2\n");
    printf("스택과 큐 출력 >> 3\n");
    scanf_s("%d", &number);

    // 반복문으로 10번, 값을 넣는 push 반복
    for (D = 0; D < 10; D++) {
        LIFO.push(rand() % 1000 + 1); 
        FIFO.push(rand() % 1000 + 1); 
    }

    //반복문으로 10번, push에 의해 저장된 값을 다시 빼는 pop 반복
    if (number >= 1 && number <= 3)
    {
        switch (number) {
        case 1:
            printf("스택 출력\n");
            for (D = 0; D < 10; D++) {
                printf("%2d", LIFO.top());
                LIFO.pop();
                puts("");
            }
            break;
        case 2:
            printf("큐 출력\n");
            for (D = 0; D < 10; D++) {
                printf("%2d", FIFO.front());
                FIFO.pop();
                puts("");
            }
            break;
        case 3:
            printf("스택과 큐 출력\n");
            printf("LIFO FIFO\n");
            for (D = 0; D < 10; D++) {
                printf("%2d %2d", LIFO.top(), FIFO.front());
                LIFO.pop();
                FIFO.pop();
                puts("");
            }
            break;
        }
    }
    else {
        printf("error");
    }
    return 0;
}