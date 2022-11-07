#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float*p;

	p=(float*)malloc(5*sizeof(float));	

	p[0]=24.952;
	p[1]=2.584;
	p[2]=4.26876;
	p[3]=88.54;
	p[4]=45.8387;
	
	
//  free(p);
	p=realloc(p,10*sizeof(float));//New size is 10


	int n=5,i=1;
	while (n--)
	{
		printf("your %d value is :%.2f\n",i,*p);
		p++,i++;
	}
	
	return 0;
}

