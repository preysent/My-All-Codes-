#include <stdio.h>

int main(){

    int x;
    printf("what is your value\n");
    scanf("%d",&x);

    int z=x,y=1;

    printf("value of x is %d and value of z is %d\n",x,z);

    while(x<=10*z){
        printf("%d*%d=%d\n",y,z,x);
        x=x+z;
        y=y+1;
        
    }




    return 0;
}