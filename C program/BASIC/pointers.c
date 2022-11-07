#include <stdio.h>


int main()
{
    int a, b;
    printf("enter the number a \n");
    scanf("%d",&a);

    printf("the address of a is %d \n",&a);

    printf("the value at address %d  is %d \n",&a,*(&a));

    return 0;
}









