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
int insertarr(int ar[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
}
int main()
{
    int arr1[100] = {54, 3, 15, 48, 3};
    int size = 5;
    display(arr1, size);

    int num = 35, place = 1;

    insertarr(arr1, size, place);
    size -= 1;

    display(arr1, size);

    return 0;
}
