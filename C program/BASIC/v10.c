#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);

    printf("you have enterd %d as your age\n",age);

    if (age<15){
        printf("you are a baby!\n");
    }

    else if (age<21){
        printf("you are now in the most importent age of your life");
    }

    else{
        printf("Now you are counted as an adult");
    }
    return 0;
}
    