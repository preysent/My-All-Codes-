#include <stdio.h>
#include <string.h>
int main(){
    
    char str1[]={'p','r','e','y','\0'};
    printf("%s",str1);

    char cr1='s';
    printf("\n%c",cr1);

    int a=5,b=4;
    printf("\n%d",a+b);\

    char pn[]="preysent";//this is stord in memory like = char str1[]={'p','r','e','y','\0'};
    printf("\n%s\n",pn);


    //print string using for loop
    for(int i=0;i<9;i++){
        printf("%c",pn[i]);
    }



    return 0;
}