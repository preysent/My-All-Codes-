#include <stdio.h>
#include <stdlib.h>
typedef struct stack{
    int top;
    int size;
    char *arr;
}stk;
int isFull(stk* ptr){
    if(ptr->top>=ptr->size){
        return 1;
    }
    return 0;
}
int isEmpty(stk* ptr){
    if(ptr->top<0){
        return 1;
    }
    return 0;
}

void Push(stk* st,int value){
    if(isFull(st)){
        printf("stack overflow at %d\n",value);
    }
    else{
        st->top++;
        st->arr[st->top]=value;
    }
}

char Pop(stk* st){
    if(isEmpty(st)){
        printf("stack is underflow\n");
        return -1;
    }
    else{
        char var=st->arr[st->top];
        st->top--;
        return var;
    }
}

char Peek(stk* st,int indx){
     if(st->top-indx+1<0){
    printf("invalid index\n");
   return 0;}
    else{
        return st->arr[st->top-indx+1];
    }
}

int isChar(char  ch){
    if (ch == '+'||ch=='-'||ch=='/'||ch=='*')
    {
        return 0;
    }
    return 1;    
}

int Presi(char  ch){
    if(ch == '+'||ch=='-')
       return 2;
    else if(ch=='/'||ch=='*')
       return 3;
    else 
       return 1;
}

char * IN_to_PO(char * infix){
    stk *sk=(stk*)malloc(sizeof(stk));
    sk->size=40;
    sk->top=-1;
    sk->arr=(char*)malloc(sk->size*(sizeof(char)));

    char * postfix =(char*)malloc(20*sizeof(char));

    int i=0,p=0;

    while(infix[i]!='\0'){
        if (isChar(infix[i]))
        {
            postfix[p]=infix[i];
            p++;
            i++;
        }

        else{
            if(Presi(infix[i]) > Presi(sk->arr[sk->top])){
                Push(sk,infix[i]);
                i++;
            }
            else{
                while(Presi(infix[i]) <= Presi(sk->arr[sk->top])){
                    postfix[p]=Pop(sk);
                    p++;
                }
            }           
        }
      
        }
        while(!isEmpty(sk)){
         postfix[p]=Pop(sk);
         p++;       
       }

    for(int i=0;i<=p;i++){
        printf("%c",postfix[i]);
    }

}
int main(){
    // stk *sk=(stk*)malloc(sizeof(stk));
    // sk->size=40;
    // sk->top=-1;
    // sk->arr=(char*)malloc(sk->size*(sizeof(char)));


    // Push(sk,350);
    // Push(sk,750);
    // Push(sk,950);
    // Push(sk,384);

    // printf("%d - %d - %d - %d",'*','+','-','/');

    char infix[20]="";
    
    scanf("%s",&infix);
    IN_to_PO(infix);

    // printf(" %s ",IN_to_PO(infix)); 

    //  int i=0,n=0;

    //  printf(" this = %s\n",infix);

    // while (infix[i]!='\0')
    // {
    //     if (infix[i]<50)
    //     {
    //         if(isEmpty(sk)){          
    //             Push(sk,infix[i]);
    //         }       

    //         else if(Peek(sk,1)=='+'||Peek(sk,1)=='-'||!Peek(sk,1)&&infix[i]=='*'||infix[i]=='/')
    //        { 
    //        Push(sk,infix[i]);
    //        }

    //        else{ 
    //         while(sk->top>=0)
    //        { 
    //         postfix[n]=Pop(sk);
    //         n++;
    //         }
    //         printf("%c ",infix[i]);
    //        }
    //     }
        
    //     else{
    //         postfix[n]=infix[i];
    //         n++;
    //     }

    //     i++;
              
    // }
    // while(sk->top>=0)
    //        { 
    //         postfix[n]=Pop(sk);
    //         n++;
    //         }

    // printf("this is == %s",postfix);
    


}