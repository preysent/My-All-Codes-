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

	 s1.id=5035;
	 s1.class=9;
	 s1.div='c';
	 strcpy(s1.name,"Preysent");

    printf("Your ID is : %d\n",s1.id);
	printf("Your Name is : %s\n",s1.name);
	printf("Your Class is : %d \n",s1.class);
	printf("Your Division is : %c \n",s1.div);


	return 0;
}
