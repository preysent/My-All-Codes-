#include <stdio.h>
int main(int argc, char const *argv[])

{

    int value[15], i, a, n, x;
    printf("ENTER the Number for value\n");
    scanf("%d", &n);

    printf("ENTER the to Number of value\n");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &value[i]);
    }

    for (i = 0; i < n; ++i)
    {

        for (a = i + 1; a <= n; ++a)
        {

            if (value[i] > value[a])
            {

                x = value[a];
                value[a] = value[i];
                value[i] = x;
            }
        }
    }
    printf("value of Number \n");


    for (i = 0; i < n; i++)

        printf("%d\n", value[i]);




    
    //  while(i<n)
    //     printf("%d\n",value[i]);
    //     i++;

    
     


    return 0;
}
