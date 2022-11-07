#include <stdio.h>
typedef struct college{
    char name[40];
    int ID;
}col;

int main(){
    col st1[10];
     for (int i = 0; i < 5; i++)
    {
        scanf("%s",&st1[i].name);
        scanf("%d",&st1[i].ID);
    }
    FILE(*fptr);

    fptr=fopen("world.txt","a");
    fprintf(fptr,"Hello world this is praveen\n");  

   

    for (int i = 0; i < 5; i++)

    {        fprintf(fptr,"Name of student %d is :%s\n",i+1,st1[i].name);
        fprintf(fptr,"Name of student %d is :%d\n\n",i+1,st1[i].ID);    }  
        

    fclose(fptr);

    return 0;
}
