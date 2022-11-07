#include <stdio.h>

int fact(int);
int fibo(int);//Function prototype





int main(int argc, char const *argv[])
{
    int p,f;
    printf("Enter your value\n");
    scanf("%d",&p);

    printf("The value of factorial is %d\n",fact(p));// [   fact(p)   ] Function call

      printf("Enter your value for fibonachi\n");
    scanf("%d",&f);

 printf("The value of serice is %d\n",fibo(f));// [   fibo(f)   ] Function call

    return 0;
}





// Function Defination
int fact(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a*fact(a-1);
}

int fibo(int a){
    if (a ==0 || a==1)
    {
        return 1;
    }
    return a+fibo(a-1);
    
}


























/*
#include<stdio.h>

// factorial(n) = n * n-1 * n-2 * n-3 * 4 * 3 * 2 * 1
// factorial(5) = 5 * 4 * 3 * 2 * 1
// factorial(1) = 1
// factorial(0) = 1

// factorial(n) = n * n-1 * n-2 * n-3 * 4 * 3 * 2 * 1
// factorial(n) = n * (n-1 * n-2 * n-3 * 4 * 3 * 2 * 1)
// factorial(n) = n * factorial(n-1)
int factorial(int);

int main(){
    printf("The value of factorial 6 is %d", factorial(6));
    return 0;
}

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

// Dry run of factorial 4
// factorial(4)
// 4 * factorial(3)
// 4 * 3 * factorial(2)
// 4 * 3 * 2 * factorial(1)
// 4 * 3 * 2 * 1
// 24

*/



















