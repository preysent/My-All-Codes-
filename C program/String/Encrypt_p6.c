#include <stdio.h>
#include <string.h>

void encrypt(char *st1){
   char *ptr=st1;
   int i=0;
 
    while (*ptr != '\0')
    {     
       
        *ptr=*ptr+1;
        ptr++;
    
    }    
}

int main(){
    
    char st_1[]="my name is ratan";
    encrypt(st_1);
    
    printf("did you meen : %s",st_1);
 return 0;
}




