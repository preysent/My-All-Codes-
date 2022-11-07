#include <stdio.h>
int main(int argc, char const *argv[])
{
    int p,c,m;

    printf("Enter your marks in Physics\n");
    scanf("%d",&p);

    printf("Enter your marks in Chamistry\n");
    scanf("%d",&c);
    
    printf("Enter your marks in Maths\n");
    scanf("%d",&m);

    float ps=p/3+c/3+m/3;

    if(ps<40){
      printf("You are fail\nYour overall mark are not enoff");

    }
    
    else if(p<33){
         printf("You are fail\nYour Physecs mark are not enoff");
    }

     else if(c<33){
         printf("You are fail\nYour camistry mark are not enoff");
    }

     else if(m<33){
         printf("You are fail\nYour maths mark are not enoff");
    }


    else{
       printf("you are pass\n");
    }
printf("Your parsentage is %f",ps);

   
    return 0;

}
