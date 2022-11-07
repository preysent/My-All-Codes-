
#include <stdio.h>
#include <string.h>

int s_length(char *st){
  int n=0;

 char *c=st;
  while (*c != '\0'){     
   n++;
   c++;    
  }
  return n;
  
}

int main()
{ 
  char st[]="Myst";

  printf("the length of %s string \n",st);
printf("The length of %s string is %d",st,s_length(st));

    
 return 0;
}


