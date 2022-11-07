#include <stdio.h>

int main(void)
{
    char nm[]="praveen";

    // a=4<<a;
    int i=0;

    while(nm[i]!='\0'){    


        printf("%c",nm[i]^'!');
        i++;
    }

    return 0;
}
