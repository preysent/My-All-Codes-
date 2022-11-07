#include <stdio.h>

int main()
{

    FILE(*fptr);
    char word;

    fptr = fopen("world.txt", "r");

    while (1)
    {

        word = fgetc(fptr);
        printf("%c", word);

        if (word == EOF)
        {
            break;
        }
    }

    fclose(fptr);
    return 0;
}
