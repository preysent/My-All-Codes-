#include<stdio.h>
int main(){
    int T;
	scanf("%d",&T);
	while (T--)
	{
		int N,X,P,t;
		scanf("%d %d %d",&N,&X,&P);
		t=3*X-(N-X);
		if(t>=P){
			printf("PASS\n");
		}
		else{printf("FAIL\n");
		}
	}
		
}
