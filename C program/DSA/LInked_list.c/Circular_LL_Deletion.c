#include <stdio.h>
#include <stdlib.h>

//Defining the structure
typedef struct node
{
    int data;
    struct node* next;
}nod;


//Travertion function
void travertion(nod*head){
    nod*p=head;
    do{
    printf("value is: %d\n",p->data);
    p=p->next;
    }while(p!=head);
}

int delete_head(nod*head){
    nod*had=head;
    nod*tail=head->next;
    while(tail->next!=head){
        tail=tail->next;
    }
    //printf("this is: %d\n",tail->data);
    tail->next=head->next;
    head=head->next;
    free(had);
    had=NULL;
    return head;

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
    forth->next=one;

    
    travertion(one);
    printf("\n");
   

   one = delete_head(one);  
    travertion(one); 
    printf("\n");


    return 0;

}