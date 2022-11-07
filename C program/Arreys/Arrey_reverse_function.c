#include <stdio.h>

int reverse(int[],int);



int main()
{
    int num[10]= {1,2,3,4,5,6,7,8,9,10};
    int *p_num;
   p_num = num;


   

    printf("your value is :");
    for (int i = 0; i < 10; ++i)
    {
        printf("  %d", *p_num);
        *p_num++;
    }

    reverse(num,10);

     printf("\n\nyour value is :");
    for (int i = 0; i < 10; ++i)
    {
        printf("  %d", num[i]);
       
    }
    return 0;}




int reverse(int ptr[],int n){
    int s;
    // int n=10;
 for (int i = 0; i < n/2 ; i++)
    {
        s = ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=s;        
    }}