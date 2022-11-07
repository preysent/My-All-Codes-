#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int value;
    struct node * next; 
}nod;

typedef struct Queue_Array{

    nod * f;
    nod * r;
    
}que;

int isEmpty(que*qu){
    if(qu->r==NULL&&qu->f==NULL){
        return 1;
    }
    return 0;
}
// int isFull(que*qu){
//     // if(qu->r==NULL&&qu->f!=NULL){
//         return 1;
//     // }
//     return 0;
// }
void ENque(que*qu,int val){
    // if(isFull(qu)){
    //     printf("your que is full at %d\n",val);
    // }
    // else{
        nod*n=(nod*)malloc(sizeof(nod));
        n->value=val;
        n->next=NULL;
        if(isEmpty(qu)){
          qu->f=n;
          qu->r=n;
         } 
        else{     
        (qu->r)->next = n;
        qu->r =n;
        }
    // }
}
int DEque(que*qu){
    if(isEmpty(qu)){
        printf("your que is empty\n");
    }
    else{
        nod *n=qu->f;

       
        int ans = (qu->f)->value;
        if(qu->f==qu->r){
            qu->f=NULL;
            qu->r=NULL;
        }
        else
        qu->f=(qu->f)->next;

        free(n);
        return ans;
    }
}

void main(){
    que *q=(que*)malloc(sizeof(que));
    
    q->f=NULL;
    q->r=NULL;
   

    ENque(q,34);
    ENque(q,501);
    // ENque(q,845);
    ENque(q,754);
    // ENque(q,79);
 


    printf("de = %d\n",DEque(q));
    printf("de = %d\n",DEque(q));
    // printf("de = %d\n",DEque(q));
    // printf("de = %d\n",DEque(q));
    printf("de = %d\n",DEque(q));

    //   ENque(q,59);
    //   ENque(q,421);
    //   ENque(q,831);   
    

    if (isEmpty(q))
    {
        printf("this queue is empty\n");
    }
    // if(isFull(q)){
    //     printf("this queue if full\n");
    // }
    
}
