#include <stdio.h>
#include <string.h>

struct student{
	int id;
	char name[15];
	int class;
	char div;
};

void show(struct student st) //Function diclaration
{
           printf("your Student ID is:  %d \n",st.id);         //
		    printf("your Student Name is:  %s \n",st.name);     //Function 
			 printf("your Student Class is:  %d \n",st.class);   //prototype
			  printf("your Student Division is:  %c \n",st.div);  //
}


int main()
{
	 printf("\n\nYour Structure if C is  :- \n\n");

	 struct student s1;	 
	 s1.id=5035;
	 s1.class=9;
	 s1.div='c';
	 strcpy(s1.name,"Preysent");
	
	show (s1);                        //Function call


	return 0;
}
