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
    Btrav(e); 
}