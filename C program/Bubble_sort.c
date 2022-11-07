#include <stdio.h>

int main (){
    int arr[100],n,i,j;
    printf("\n\nEnter size of array : ");
    scanf("%d",&n);

    printf("Enter elemant of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }  
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n-i+1; j++)
        {          
            if(arr[j]<arr[j-1]){          
                arr[j]+=arr[j-1];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]-=arr[j-1];             
            }
        }        
    }
    printf("\n Array in Ascending order : "); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }   
   for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n-i+1; j++)
        {          
            if(arr[j]>arr[j-1]){            

                arr[j]+=arr[j-1];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]-=arr[j-1];             
            }
        }        
    }
    printf("\n Array in Descending order : "); 
     for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n\n");
    return 0;    
}