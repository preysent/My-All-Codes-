#include <stdio.h>
int main(){
    char name[20];


    // printf("Enter your name\n");
    // scanf("%s",name);
    // printf("your name is %s\n",name);



    // For multiwords string use get


     printf("Enter your name\n");
    gets(name);
    puts(name);
    printf("YOUR NAME IS %s",name);


    
    return 0;
}