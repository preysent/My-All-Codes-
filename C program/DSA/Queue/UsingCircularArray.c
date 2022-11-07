#include <stdio.h>
#include <stdlib.h>
typedef struct Queue_Array
{
    int size;
    int f;
    int r;
    int *arr;
}que;

int isEmpty(que*qu){
    if(qu->r==qu->f){
        return 1;
    }
    return 0;
}
int isFull(que*qu){
    if(qu->arr[(qu->r+1)%qu->size]==qu->arr[qu->f]){
        return 1;
    }
    return 0;
}
void ENque(que*qu,int val){
    if(isFull(qu)){
        printf("your que is full at %d\n",val);
    }
    else{
        qu->r=(qu->r+1)%qu->size;
        qu->arr[qu->r]=val;
    }
}
int DEque(que*qu){
    if(isEmpty(qu)){
        printf("your que is empty\n");
    }
    else{
        qu->f=(qu->f+1)%qu->size;
        int ans = qu->arr[qu->f];
        return ans;
    }
}

void main(){
    que *q=(que*)malloc(sizeof(que));
    q->size=5;
    q->f=0;
    q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));

    ENque(q,34);
    ENque(q,501);
    ENque(q,845);
    ENque(q,754);
    // ENque(q,79);
 


    printf("de = %d\n",DEque(q));
    printf("de = %d\n",DEque(q));
    printf("de = %d\n",DEque(q));
    // printf("de = %d\n",DEque(q));
    // printf("de = %d\n",DEque(q));

      ENque(q,59);
      ENque(q,421);
      ENque(q,831);   
    

    if (isEmpty(q))
    {
        printf("this queue is empty\n");
    }
    if(isFull(q)){
        printf("this queue if full\n");
    }
    
}
