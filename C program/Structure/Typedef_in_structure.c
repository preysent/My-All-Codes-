#include <stdio.h>
#include <string.h>

typedef struct student{  /// Her we use "typedef" for short name or alias name
	int id;
	char name[15];
	int class;
	char div;
}std;     ////Here "std" is short name(alias name)  of sturcture



int main()
{	 printf("\n\nYour Structure if C is  :- \n\n");
     
	 ///Here we use this typedef

	 std s1;
	 std *pt;
	 pt=&s1; 	

	 strcpy(pt->name,"Preysent");	 
	 pt->div='F';                    
	 pt->class=8; 
	 pt->id=5001;                   

    printf("Your ID is : %d\n",s1.id);
	printf("Your Name is : %s\n",s1.name);
	printf("Your Class is : %d \n",s1.class);
	printf("Your Division is : %c \n",s1.div);

	return 0;
}
