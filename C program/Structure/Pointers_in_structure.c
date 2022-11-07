#include <stdio.h>
#include <string.h>

struct student{
	int id;
	char name[15];
	int class;
	char div;
};


int main()
{
	 printf("\n\nYour Structure if C is  :- \n\n");   

	 struct student s1;
	 struct student* pt;
	 pt=&s1;

	 (*pt).id=5502;	   //clasic way of initalaization using pointers

	 strcpy(pt->name,"Preysent");	 //this all variable are
	 pt->div='F';                     //initialaize by
	 pt->class=8;                     //   ->    operator

    printf("Your ID is : %d\n",s1.id);
	printf("Your Name is : %s\n",s1.name);
	printf("Your Class is : %d \n",s1.class);
	printf("Your Division is : %c \n",s1.div);


	return 0;
}
