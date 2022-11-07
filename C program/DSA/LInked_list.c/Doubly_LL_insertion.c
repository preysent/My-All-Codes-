#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *prev;    
    struct node *next;
}nod;

void Ftrav(nod*head){
   
    while (head!=NULL)
    {
        printf("value is %d\n",head->data);
        head=head->next;
    }
}

void Btrav(nod*tail){
    while (tail!=NULL)
    {
        printf("value is %d\n",tail->data);
        tail=tail->prev;
    }
}

int INST_head(nod*head,int value){
    nod*ptr=(nod*)malloc(sizeof(nod));
    ptr->data=value;
    
    head->prev=ptr;
    ptr->next=head;

    ptr->prev=NULL;
    head=ptr;
    return head;
    }

int inst_index(nod*head,int value,int index){
     nod*ptr=(nod*)malloc(sizeof(nod));
    ptr->data=value;

    nod*p1=head;
    nod*p2=head->next;

    for (int i = 0; i < index-1; i++)
    {
        p1=p1->next;
        p2=p2->next;
    }
    // printf("THIS IS %d\n",pt->data);
    ptr->next=p2;
    p2->prev=ptr;

    ptr->prev=p1;
    p1->next=ptr;
    
    return head;    
}

int INST_end(nod*head,int value){
    nod*ptr=(nod*)malloc(sizeof(nod));
    ptr->data=value;

    nod*p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    
    p->next=ptr;
    ptr->prev=p;

    ptr->next=NULL;

    return head;
}

int main(){
    nod*a,*b,*c,*d,*e;
    a=(nod*)malloc(sizeof(nod));
    b=(nod*)malloc(sizeof(nod));
    c=(nod*)malloc(sizeof(nod));
    d=(nod*)malloc(sizeof(nod));
    e=(nod*)malloc(sizeof(nod));

    a->data=12;
    b->data=13;
    c->data=14;
    d->data=15;
    e->data=16;

    a->prev=NULL;
    a->next=b;

    b->prev=a;
    b->next=c;

    c->prev=b;
    c->next=d;

    d->prev=c;
    d->next=e;

    e->prev=d;
    e->next=NULL;

    Ftrav(a);
    printf("\n");
    // Btrav(e); 

    printf("\n");

    // a=INST_head(a,555);
    // Ftrav(a);
    // printf("\n");

    // a=inst_index(a,585,4);
    // Ftrav(a);
    // printf("\n");

    a=INST_end(a,58);
    Ftrav(a);
    printf("\n");
}