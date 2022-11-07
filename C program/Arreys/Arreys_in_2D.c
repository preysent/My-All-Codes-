#include <stdio.h>
int main()
{    int i=3;
    int ar2d[i][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter marks of student %d and in subject %d\n", i + 1, j + 1);
            scanf("%d", &ar2d[i][j]);
        }
    }

        for (int i = 0; i < 3; i++)
        {
            // for (int j = 0; j < 4; j++)
            // {
            //     printf("Marks of student %d and in subject %dis : %d\n", i + 1, j + 1, ar2d[i][j]);
            // }

            //or

             for (int j = 0; j < 4; j++)
            {
                printf(" %d ", ar2d[i][j]);

            }
             printf(" \n ");
            
        }

        return 0;
    }