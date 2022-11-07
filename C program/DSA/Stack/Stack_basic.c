#include <stdio.h>
#include <stdlib.h>
typedef struct stack{
    int size;
    int top;
    int *arr;
}stk;

int Lstk(int top){
    if(top>=-1){
        return 1;
    }
    return 0;
}
int Mstk(int top,int size){
    if(top>=size){
        return 1;
    }
    return 0;

}

int main(){

    // stk val;
    // val.size=70;
    // val.top=-1;
    // val.arr=(int*)malloc(val.size*sizeof(int));
    // printf("your size is %d",val.size);


    stk*pr;
    pr=(stk*)malloc(sizeof(stk));
    pr->size=45;
    pr->top=-1;
    pr->arr=(int*)malloc(pr->size*(sizeof(int)));
    printf("your size is %d\n",pr->size);

    // if (Lstk(pr->top))
    // {
    //     printf("this is empty\n");
    // }
    
    if (Mstk(pr->top,pr->size))
    {
        printf("this is full\n");
    }
    


}