#include <stdio.h>

int main(void)
{
	
	int t;
	scanf("%d", &t);

	while (t--)  // here t-- is IMPERTENT TO NOTIC <----------==
    
	{
		printf("hello wourld\n");
		int x,y;
		scanf("%d %d",&x,&y);


		if (x < y)
		{			printf("FRIST\n");		}
		else if (x > y)
		{			printf("SECUND\n");		}
		else
		{			printf("ANY\n");		}
	}	
	return 0;
}