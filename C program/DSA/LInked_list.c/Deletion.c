#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print(struct node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}


int Head_dlt(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

int DltIndex(struct node *head, int index)
{

    struct node *p = head;
    struct node *point = head->next;

    int i = 0;
    while (i < index - 1)
    {
        p = p->next;
        point = point->next;
        i++;
    }

    p->next = point->next;
    free(point);
    return head;
}

int DltEnd(struct node *head)
{
    struct node *p = head, *pnext = head->next;
    while (pnext->next != NULL)
    {

        p = p->next;
        pnext = pnext->next;
    }

    p->next = NULL;

    free(pnext);

    return head;
}

int main()
{
    struct node *a, *b, *c, *d;
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    d = (struct node *)malloc(sizeof(struct node));

    (*a).data = 101;
    (*b).data = 102;
    c->data = 103;
    d->data = 104;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    print(a);
    printf("\n");

    
    a=Head_dlt(a);
    print(a);
    printf("\n");

    // a=DltIndex(a,3);
    // print(a);
    // printf("\n");

    // a = DltEnd(a);
    // print(a);
    // printf("\n");
}