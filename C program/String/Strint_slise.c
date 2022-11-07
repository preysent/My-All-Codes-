#include <stdio.h>
#include <string.h>
void slise(char *ptr,int m,int n){   
    int j=0;
    while ( (j+m)<=n)
    {
        ptr[j]=ptr[j+m];
        j++;
    }
    ptr[j]='\0';
}

int main()
{ 
  char my_str[]="preysent";
  slise(my_str, 1,4);
  printf("Your slise string is : %s",my_str);    
 return 0;
}




