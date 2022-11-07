#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value;
    printf("Enter the value Whic's table you wont\n\n");
    scanf("%d",&value);
    
    printf("  %d  Frist Multiple \n",value*1);
    printf("  %d  Secund Multiple\n", value*2);
    printf("  %d  Thurd Multiple\n", value*3);
    printf("  %d  Fourth Multiple\n", value*4);
    printf("  %d  Fipth Multiple\n", value*5);
    printf("  %d  Sixth Multiple\n", value*6);
    printf("  %d  Seventh Multiple\n", value*7);
    printf("  %d  Eighth Multiple\n", value*8);
    printf("  %d  nineth Multiple\n", value*9);
    printf("  %d  tenth Multiple\n\n\n\n", value*10);

    for ( int i= 10; i >0; i--)
    {
        printf("%d*%d=%d\n",value,i,value*i);
    }
    
    
    return 0;
}
