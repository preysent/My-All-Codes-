#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(){
    // clrscr();//  <---This is not working 
    int num,guess,guesses=1;
    srand(time(0));
    num = rand()%100+1;
    printf("Your randum value is %d\n",num);
    
    printf("Enter You Guess\n");
    do{
        
        scanf("%d",&guess);
       

        if(guess>num){
            printf("Enter lower value\n");
            }
        else if(guess<num){
            printf("Enter Higher value\n");
            }
        else{
            printf("you guess the answer in %d attempt\n",guesses);
        }        
 guesses++;
    }while(guess!=num);




    return 0;
}