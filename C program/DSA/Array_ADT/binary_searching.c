#include <stdio.h>

int binary_find(int va[], int length, int element)
{
    int min = 0, max = length, avg;

    while (min <= max)
    {
        avg = (min + max) / 2;
        printf(" 25 is %d \n",avg);
        if (va[avg] == element)
        {
            return avg;
        }
        else if (va[avg] > element)
        {
            max = avg ;
        }
        else if  (va[avg] < element)
        {
            min = avg ;
        }
    }
}

int main()
{
    int arr[100] = {1, 5, 7, 11, 16, 25, 34, 55, 59, 66, 85, 90,95};

    int size = 13,elm = 95;
   

    printf("%d\n", binary_find(arr, size, elm));
}