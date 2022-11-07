#include <stdio.h>

int main(){ 
    int k;
    
    printf("write a value which is divisible by 144\n");
    scanf("%d",&k);

    printf("%d\n",k%144);
    
    int v = k%144;

    if (v==0){
        printf("Your answer is True\n");
    }
    else{
        printf("Your answer is wrong\n");
    }

    return 0;
}