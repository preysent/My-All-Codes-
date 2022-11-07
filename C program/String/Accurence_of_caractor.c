#include <stdio.h>
#include <string.h>

int accurence(char *st1,char c){
    char *pt= st1;
    int p=0;
    while (*pt!='\0')
    {
       if(*pt==c){ p++; }
       
              pt++;
        }
        return p;
    }  
  


int main(){   
    char st_1[]="praveen parihar nararam";    
    printf("did you meen : %d", accurence(st_1,'a'));
 return 0;
}




