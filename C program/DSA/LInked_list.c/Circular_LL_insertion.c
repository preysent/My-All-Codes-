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

int INST_head(nod*head,int value){
    nod*pt=(nod*)malloc(sizeof(nod));  
    pt->data=value;  
    nod*tail=head;
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    pt->next=head;
    tail->next=pt;
    head=pt;
    // return head;
}

int INST_index(nod*head,int value,int index){
    nod*pt=(nod*)malloc(sizeof(nod));  
    pt->data=value;  
    nod*tail=head;
    int i=0;
    while (i<index-1)
    {
        tail=tail->next;
        i++;
    }
    printf("this is %d\n",tail->data);
    pt->next=tail->next;
    tail->next=pt;    
}
int INST_last(nod*head,int value){
     nod*pt=(nod*)malloc(sizeof(nod));  
    pt->data=value;  
    nod*tail=head;   

    do
    {  
    tail=tail->next;     
                 
    }while(tail->next!=head);

    pt->next=tail->next;
    tail->next=pt;    

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

    // one = INST_head(one,305);  
    // travertion(one); 
    // printf("\n");

    // INST_index(one,305,1);  
    // travertion(one); 
    // printf("\n");

    INST_last(one,5347);  
    travertion(one); 
    printf("\n");


    return 0;

}