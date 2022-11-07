#include <stdio.h>
int main(int argc, char const *argv[])
{

    int n,k=1;
    printf("Enter the natural number\n");
    scanf("%d", &n);

    do{
        printf("sum of frist %d natural number is %d\n",k,k*(k+1)/2);
        k=k+1;

    }while(k<=n);
    return 0;
}
