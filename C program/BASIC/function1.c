#include <stdio.h>
int avg(int ,int ,int );//Function prototype
int force(int);






int main(int argc, char const *argv[])
{int a,b,c,m;
     printf("Enter the three number\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("the average is %d\n",avg(a,b,c));

    printf("Enter your mass\n");
    scanf("%d",&m);
    printf("force = %d",force(m));
    // [   avg(a,b,c)   ] Function call
    return 0;
}





// Function Defination
int avg( int a, int b, int c){
    a=(a+b+c)/3;                 
    return a;
}
int force(int m){
    m=m*9.8;
    return m;

}