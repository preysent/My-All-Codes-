#include <stdio.h>

int main()

{
    int a,v=0;

    printf("Enter a number\n");
    scanf("%d",&a);

    do{
        printf("%d\n",v);
        v=v+1;

    }while(v<=a);

    
    return 0;
}