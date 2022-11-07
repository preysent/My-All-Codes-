#include <stdio.h>

int table(int *arr,int n,int ts){
  int j;
  for (int j = 1; j <= ts; j++)
     {         arr[j]=n*j;      }

     for (int i = 1; i <= ts; i++)
       printf("%d*%d = %d\n",n,i,arr[i]);
}


int main(){
    
        int A_T[3][10],n,size;

        printf("Enter the value for multiplication\n");
        scanf("%d",&n);

         printf("Enter the value for number of multiplication\n");
        scanf("%d",&size);

        table( A_T[0],n,size);





    // for (int j = 1; j <= 10; j++)
    // {         A_T[0][j]=2*j;      }

    // for (int i = 1; i <= 10; i++)
    //   printf("2*%d = %d\n",i,A_T[0][i]);


    
    // printf("\n\n");


    
    // for (int j = 1; j <= 10; j++)
    // {         A_T[1][j]=7*j;      }

    // for (int i = 1; i <= 10; i++)
    //   printf("2*%d = %d\n",i,A_T[1][i]);


    
    //  printf("\n\n");

    
    
    // for (int j = 1; j <= 10; j++)
    // {         A_T[2][j]=9*j;      }

    // for (int i = 1; i <= 10; i++)
    //   printf("2*%d = %d\n",i,A_T[2][i]);
    
    
    
        return 0;
}
