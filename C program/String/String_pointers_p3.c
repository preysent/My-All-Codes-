#include<stdio.h>

int main() {
    // creating a pointer variable to store the value of
    // our string
    char *strPtr = "HelloWorld";
    
    // temporary pointer to iterate over the string
    char *temp = strPtr;
    
    // creating a while loop till we don't find
    // a null charater in the string
    while (*temp != '\0') {
        // the current character is not \0
        // so we will print the character
        printf("%c", *temp);
        
        // move to the temp pointer to the next memory location
        temp++;
    }
    return 0;
}
