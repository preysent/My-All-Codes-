#include <stdio.h>
#include <stdlib.h>

typedef struct satak
{
    int size;
    int top;
    int *arr;
} stk;
// chack for empty stack
int isempty(stk *pt)
{
    if (pt->top == -1)
    {
        return 1;
    }
    return 0;
}

// chack for full stack
int isfull(stk *ptr)
{
    if (ptr->top >= ptr->size-1)
    {
        return 1;
    }
    return 0;
}

// push operation
void push(stk *point, int value)
{
    if(isfull(point)){
        printf("stack is full cannot push %d\n",value);
    }
    else{
        point->top++;
        point->arr[point->top]=value;
    }
}

//pop operation
int pop(stk*ptr){
    if (isempty(ptr))
    {
        printf("stack is empty\n");
        return -1;                 //this value cannot be exist in your stack
    }
    else{
        int v=ptr->arr[ptr->top];
        ptr->top--;
        return v;
    }
}

//peek operation
void peek(stk*pt,int index){
    if(pt->top<index-1){
        printf("Invalid no\n");
    }
    else{
        printf("%d",pt->arr[pt->top+1-index]);
    }
}
// stack print
int printstk(stk *pt)
{
    for (int i = 0; i <= pt->top; i++)
    {
        printf("Value on %d is %d\n", i, pt->arr[i]);
    }
}

int main()
{
    stk *pr;
    pr = (stk *)malloc(sizeof(stk));
    pr->size = 15;
    pr->top = -1;
    pr->arr = (int *)malloc(sizeof(int));
    printf("your size is %d\n", pr->size);

    printf("Enter the no of value\n");
    int no;
    scanf("%d",&no);
    for (int i = 0; i < no; i++)
    {        
        int v;
        scanf("%d",&v);
        push(pr,v);
    }
     printstk(pr);
    
    int vlu=pop(pr);

    printf("vlu is %d\n",vlu);

    printstk(pr);
    peek(pr,4);
}