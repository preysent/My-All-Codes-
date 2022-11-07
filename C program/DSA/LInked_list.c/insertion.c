#include <stdio.h>
#include <stdlib.h>

typedef struct node
{    int data;
    struct node *next;
} nod;

void PrintLinkList(nod *head)
{    while (head != NULL)
    {
        printf("value is : %d\n", head->data);
        head = head->next;
    }
}


//insartion at the head/starting

nod* INST_1st(nod *head, int value)
{
    nod *pt = (nod *)malloc(sizeof(nod));
    pt->data = value;
    pt->next = head;
    return pt;
}


//insartion at an Index

int INST_index(nod *head, int value, int index)
{
    nod *ptr = (nod *)malloc(sizeof(nod));
    ptr->data = value;
    nod *p = head;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    // return head;
}

//insartion at the End of list

int INST_end(nod *head, int value)
{
    nod *ptr = (nod*) malloc(sizeof(nod));
    ptr->data = value;
    nod *p = head;
   while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    // return head;
}


//Insartion after a given node
int INST_node(nod *node, int value)
{
    nod *pt = (nod *)malloc(sizeof(nod));
    pt->data = value;

    pt->next = node->next;
    node->next=pt;
    // return pt;
}


int main()
{
    nod *frist, *second, *third, *fourth;

    frist = (nod *)malloc(sizeof(nod));
    second = (nod *)malloc(sizeof(nod));
    third = (nod *)malloc(sizeof(nod));
    fourth = (nod *)malloc(sizeof(nod));

    frist->data = 01;
    frist->next = second;

    second->data = 02;
    second->next = third;

    (*third).data = 03;
    third->next = fourth;

    fourth->data = 04;
    fourth->next = NULL;

    PrintLinkList(frist);
    printf("\n");

 frist =INST_1st(frist, 14);

//  INST_index(frist, 144, 2);

//  INST_end(frist, 1444); 

    // INST_node(second, 5035);

    PrintLinkList(frist);

    return 0;
}