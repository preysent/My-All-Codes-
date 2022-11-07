#include <stdio.h>
#include <string.h>
int main()
{ 
    char st_1[35];
     char st_2[35];
     char c;
     int i =0;

     printf("Enter your frist string\n");
     scanf("%s",st_1);


     printf("Enter secund string\n");

     while (c!='\n')

     {   fflush(stdin);
        scanf("%c",&c);
        st_2[i]=c;
        i++;
     }
     st_2[i-1]='\0'; //use to subtract the i from c

     puts(st_1);
     puts(st_2);
    
    

     printf("Conperiation between two string is %d",strcmp(st_1,st_2));

     
    
 return 0;
}



