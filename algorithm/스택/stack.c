#include <stdio.h>
#include <stdlib.h>
typedef struct Node //��� ����
{
	int data;
	struct Node* next;
}Node;
typedef struct Stack //Stack ����ü ����
{
	Node* top;    //�� �� ���(���� �ֱٿ� ������ ���)
}Stack;
void InitStack(Stack* stack);//���� �ʱ�ȭ
int IsEmpty(Stack* stack); //������ ������� Ȯ��
void Push(Stack* stack, int data); //���ÿ� ����
int Pop(Stack* stack); //���ÿ��� ����
int main(void)
{
	int i;
	Stack stack;
	InitStack(&stack);//���� �ʱ�ȭ
	for (i = 1; i <= 5; i++)//1~5���� ���ÿ� ����
	{
		Push(&stack, i);
	}
	while (!IsEmpty(&stack))//������ ������� �ʴٸ� �ݺ�
	{
		printf("%d ", Pop(&stack));//���ÿ��� ������ �� ���
	}
	printf("\n");
	return 0;
}
void InitStack(Stack* stack)
{
	stack->top = NULL; //���� �ʱ�ȭ������ top�� NULL�� ����
}
int IsEmpty(Stack* stack)
{
	return stack->top == NULL;    //top�� NULL�̸� �� ����
}
void Push(Stack* stack, int data)
{
	Node* now = (Node*)malloc(sizeof(Node)); //��� ����
	now->data = data;//������ ����
	now->next = stack->top;//now�� next��ũ�� ���� top���� ����
	stack->top = now;   //������ �� ���� now�� ����
}
int Pop(Stack* stack)
{
	Node* now;
	int re;
	if (IsEmpty(stack))
	{
		return 0;
	}
	now = stack->top;//now�� top���� ����
	re = now->data;//���� ���� now�� data�� ����
	stack->top = now->next;//top�� now�� next�� ����
	free(now);//�ʿ������ �޸� ����
	return re;
}