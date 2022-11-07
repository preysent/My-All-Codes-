#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;

} nod;

int isempty(nod *ptr){
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

int isfull(nod *pt){
    nod *p = (nod *)malloc(sizeof(nod));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

nod *push(nod *ptr, int value)
{
    if (isfull(ptr))
    {
        printf("Stack is overflow\n");
    }
    else
    {
        nod *a = (nod *)malloc(sizeof(nod));
        a->value = value;
        a->next = ptr;
        ptr=a;
    }
}

nod *pop(nod*ptr){
     if (isempty(ptr))
    {
        printf("Stack is underflow\n");
    }
    else{
        nod*p=ptr;
        ptr=ptr->next;

        free(p);

        return ptr;
    }
}



int main()
{
    nod *head = NULL;

    head = push(head, 203);
    head = push(head, 2003);
    head = push(head, 23);
    head = push(head, 2023);
    head = push(head, 5002);

    head = pop(head);   
        printf("the elemtnt is %d\n", head->value);
        
}