#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sp,l,b,r,ls;
    
  printf("Select a shape for finding the area\n\n1 = rectangle\n2 = square\n3 = circle\n");
  scanf("%d",&sp);

 
  if(sp<2){
      printf("you are selected reactangle\n\n");
      printf("Enter the lengh\n");
      scanf("%d",&l);
      printf("Enter the breadth\n");
      scanf("%d",&b);
      printf("%d is the area of the reactangle\n",l*b);

  }
  else if (sp<3){
      printf("you are selected square\n\n");
      printf("Enter the length of square\n");
      scanf("%d",&ls);
      printf("%d is the area of the square\n",ls*ls);

  }
   else if(sp<4) {
       printf("you are selected circle\n\n");
       printf("Enter the lenth of radius of the circle");
       scanf("%d",&r);
       printf("%d is the area of the circle",r*r*3.14);

   } 

   else{
       printf("you are not selected any option\n");
   }


    return 0;
}
