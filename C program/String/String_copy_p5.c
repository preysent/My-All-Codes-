#include <stdio.h>
#include <string.h>

void copy(char *st1,char *st2){
    char i=0,j=0;
    while (st2[j]!= '\0')
    {
        st1[i]=st2[j];
        i++;
        j++;
    }    
}

int main(){
    char st_1[]="rahul";
    char st_2[]="my name is ratan";
    copy(st_1,st_2);
    printf("did you meen : %s",st_1);
 return 0;
}




