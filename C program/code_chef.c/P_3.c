#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,Y,Z;
		scanf("%d %d %d",&X,&Y,&Z);
		if(X<=3){
			printf("%d\n",X*Y);
		}
	    else if( X%3 != 0){
	        printf("%d\n",(X*Y)+Z*(X/3));
	    }
	    else{
	        printf("%d\n",X*Y+Z*((X/3)-1));
	    }
	}
	return 0;
}

// Problem
// Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.

// There are XX levels remaining in the game, and each level takes Chef YY minutes to complete. To protect against eye strain, Chef also decides that every time he completes 33 levels, he will take a ZZ minute break from playing. Note that there is no need to take this break if the game has been completed.

// How much time (in minutes) will it take Chef to complete the game?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first and only line of input will contain three space-separated integers XX, YY, and ZZ.
// Output Format
// For each test case, output on a new line the answer — the length of Chef's gaming session.