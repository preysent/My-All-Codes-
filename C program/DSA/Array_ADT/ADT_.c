#include <stdio.h>
#include <stdlib.h>
// Defining the ADT that mins structure
typedef struct my_array
{
    int size;
    int use;
    int *pt;
} ma;

// According to that entry Allocating menorye in HEAP
int make_arr(ma *m, int size, int use)
{
    (*m).size = size;
    m->use = use;
    (*m).pt = (int *)malloc(size * sizeof(int));
}

// taking value for array

int take(ma *tk)
{
    int v;
    for (int i = 0; i < tk->use; i++)
    {
        printf("Enter value : %d\n", i + 1);
        scanf("%d", &v);
        (tk->pt)[i] = v;
    }
}

// Printing value of array
void print_value(ma *pr)
{
    for (int i = 0; i < pr->use; i++)
    {
        printf(" value %d is : %d\n", i + 1, (*pr).pt[i]);
    }
}

int main()
{
    ma make;
    make_arr(&make, 20, 4);
    printf("now we are taking the value for array\n");

    take(&make);
    print_value(&make);

    return 0;
}