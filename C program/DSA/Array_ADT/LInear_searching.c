#include <stdio.h>
int find(int arr[], int length,int num){
    for (int i = 0; i < length; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }
        
    }
    return -1;
}

    int main()
{
    int arr[100] = {4, 66, 9, 38, 96, 8, 58, 3, 5, 58, 55, 6, 39, 37, 84};
    int size = 15, value = 8;

    printf("%d\n",find(arr, size, value));
    return 0;
}