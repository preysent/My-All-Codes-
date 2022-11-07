
#include <stdio.h>
#include <conio.h>

void Get_matrix( int max[][20], int r, int c){
    
    printf("\nEnter the elemants \n");
    for (int i = 0; i < r; i++)
    {   
        for (int j = 0; j < c; j++)
        {
            printf("Enter a %d %d :",i+1,j+1);
            scanf("%d",&max[i][j]);
        }        
    }  
}

void  Multiply_max(int max1[][20],int max2[][20],int res[][20], int r1,int c1, int r2,int c2){
      
      for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {   
            res[i][j]=0;

            for (int k = 0; k < c1; k++)
            {
            res[i][j] += max1[i][k] * max2[k][j];            
            }        
        }        
    }
}

void print_matrix( int max[][20], int r, int  c){

    printf("\n Output matrix :\n");
      for (int i = 0; i < r; i++)
      {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ",max[i][j]);
        }
        printf("\n");        
      }      
}

int main(){

    int matrix_1[20][20], matrix_2[20][20],matrix_3[20][20];
    int row1,col1,  row2,col2;

    clrscr();

        printf("Enter row and column for the first matrix :");
        scanf("%d %d",&row1,&col1);
        printf("Enter row and column for the second matrix :");
        scanf("%d %d",&row2,&col2);
   
    while(col1!=row2){
        printf("Error! Enter rows and columns again.\n");
        printf("Enter row and column for the first matrix :");
        scanf("%d %d",&row1,&col1);
        printf("Enter row and column for the second matrix :");
        scanf("%d %d",&row2,&col2);
        
    }

    
    Get_matrix(matrix_1,row1,col1);
  

    Get_matrix(matrix_2,row2,col2);  


    Multiply_max(matrix_1,matrix_2,matrix_3,row1,col1,row2,col2);


    printf("\nResult :-\n");
    print_matrix(matrix_3,row1,col2);

    getch();

    return 0;
}