#include <stdio.h>

int main(int argc, char const *argv[])
{
   int yer,age;
   printf("In wich year you passed your STD 12th\n");
   scanf("%d",&yer);

   printf("Enter your age\n");
   scanf("%d",&age);


   switch (yer)
   {
   case 2021:
       printf("now you are a fresher\n");
       break;

       case 2020:
       printf("now you are in secund year now\n");


                           switch (age)
                           {
                           case 20:
                               printf("now you are in your twentyes\n");
                               break;
                           
                           default:
                           printf("you age is not 20\n");
                               break;
                           }
       



       break;
   
   case 2019:
       printf("now you are in final year\n");
       break;
   
   
   default:
   printf("you are not for UG college");


       break;
   }


    return 0;
}
