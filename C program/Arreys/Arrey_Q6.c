#include <stdio.h>
int pv(int[]);

int main(){
int arr[]={-2,4,5,-6,44,-5,5,-55,-5-7,2,-4};
printf("Total positive value in your arrey is : %d",pv(arr));
return 0;
}

int pv(int *arr ){
    int ans=0 , n=14;//  n is the number of values in arrey
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            ans++;
        }        

    }
    return ans;

}