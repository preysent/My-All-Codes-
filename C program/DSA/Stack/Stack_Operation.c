#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;
} stk;

int Lstk(stk *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int Mstk(stk *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void Push(stk *stack, int value)
{
    if (Mstk(stack))
    {
        printf("Stack is full cannot push %d\n", value);
    }
    else
    {
        stack->top++;
        stack->arr[stack->top] = value;
    }
}

int Pop(stk *stack)
{
    if (Lstk(stack))
    {
        printf("Stack is underflow \n");
        return -1;
    }
    else
    {
        int val = stack->arr[stack->top];
        printf("value at %d is :%d\n", stack->top, stack->arr[stack->top]);
        stack->top--;
        return val;
    }
}

int Peek(stk *stack, int i)
{
    if (stack->top - i + 1 < 0)
    {
        printf("invelaid index\n");
        return -1;
    }
    else
    {
        return stack->arr[stack->top - i + 1];
    }
}

int main()
{

    // stk val;
    // val.size=70;
    // val.top=-1;
    // val.arr=(int*)malloc(val.size*sizeof(int));
    // printf("your size is %d",val.size);

    stk *pr = (stk *)malloc(sizeof(stk));
    pr->size = 4;
    pr->top = -1;
    pr->arr = (int *)malloc(pr->size * sizeof(int));
    printf("your size is %d\n", pr->size);

    // if (Lstk(pr))
    // {
    //     printf("this is empty\n");
    // }

    if (Mstk(pr))
    {
        printf("this is full\n");
    }

    Push(pr, 451);
    Push(pr, 452);
    Push(pr, 453);
    Push(pr, 5035);
    Push(pr,4573);

    // int a = Pop(pr);

    // printf("int a ki value is %d\n",a);

    int a = Peek(pr, 3);
    printf("int a ki value is %d\n", a);
}