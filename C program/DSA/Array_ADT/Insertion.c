#include <stdio.h>
// for display the arr
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
// for insert value to the array
int insertarr(int ar[], int size, int element, int max, int index)
{
    if (size >= max)
    {
        return -1;
    }
    for (int i = size - 1; i > index; i--)
    {
        ar[i + 1] = ar[i];
    }

    ar[index] = element;
}
int main()
{
    int arr1[100] = {54, 3, 15, 48, 3};
    int size = 5;
    display(arr1, size);

    int num = 35, place = 2;

    insertarr(arr1, size, num, 100, place);
    size += 1;

    if (arr1[place] == num)
    {
        display(arr1, size);
    }
    else
    {
        printf("insertion has failed\n");
    }

    return 0;
}
