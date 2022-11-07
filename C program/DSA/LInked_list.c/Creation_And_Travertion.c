#include <stdio.h>
#include <stdlib.h>

//Defining the structure
typedef struct node
{
    int data;
    struct node* next;
}nod;


//Travertion function
void travertion(nod*pt){
    while(pt!=NULL){
    printf("value is: %d\n",pt->data);
    pt=pt->next;
    }
}

 
int main(){

    //declearing the struct variable
    nod *one;
    nod *two;
    nod *three;
    nod *forth;
  

    //allocation of memory in heap
    one=(nod*)malloc(sizeof(nod));
    two=(nod*)malloc(sizeof(nod));
    three=(nod*)malloc(sizeof(nod));
    forth=(nod*)malloc(sizeof(nod));

  

    //assining value and link to the next pointer
    (*one).data=35;
    (*one).next=two;

    //assining value and link to the next pointer
    two->data=845;
    two->next=three; 
  

    //assining value and link to the next pointer
    three->data=3345;
    three->next=forth;

    //assining value and link to the next pointer
    forth->data=94663;
    forth->next=NULL;

    //Function call
    travertion(one);  

    DltIndex(one,2)  ;

travertion(one);  

    return 0;

}