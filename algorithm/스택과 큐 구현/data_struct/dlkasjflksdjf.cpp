#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stack>
#include <queue>
using namespace std;

//���ð� ť ���̺귯���� ����ϱ� ���� c++�� �ۼ��߽��ϴ�!
int main(void) {
    srand((unsigned int)time(NULL));
    stack<int> LIFO;
    queue<int> FIFO;
    int D;
    int number;
    //����, ������ ���ùޱ�
    printf("���ð� ť ���α׷��� ����\n");
    printf("���� ��� >> 1\n");
    printf("ť ��� >> 2\n");
    printf("���ð� ť ��� >> 3\n");
    scanf_s("%d", &number);

    // �ݺ������� 10��, ���� �ִ� push �ݺ�
    for (D = 0; D < 10; D++) {
        LIFO.push(rand() % 1000 + 1); 
        FIFO.push(rand() % 1000 + 1); 
    }

    //�ݺ������� 10��, push�� ���� ����� ���� �ٽ� ���� pop �ݺ�
    if (number >= 1 && number <= 3)
    {
        switch (number) {
        case 1:
            printf("���� ���\n");
            for (D = 0; D < 10; D++) {
                printf("%2d", LIFO.top());
                LIFO.pop();
                puts("");
            }
            break;
        case 2:
            printf("ť ���\n");
            for (D = 0; D < 10; D++) {
                printf("%2d", FIFO.front());
                FIFO.pop();
                puts("");
            }
            break;
        case 3:
            printf("���ð� ť ���\n");
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