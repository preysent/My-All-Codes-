#include <stdio.h>
int main(){

    int n,i=1;
   
    printf("Enter the value for table\n");
    scanf("%d",&n);
 step3:
    printf("%d*%d=%d\n",n,i,n*i);
    i++;
    if(i<=10){
        goto step3;
    }


return 0;
}


// go to statement