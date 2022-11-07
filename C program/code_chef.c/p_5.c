#include <stdio.h>

int main(){ 

	int T;
	scanf("%d",&T);
	while (T--)
	{
	int A,B,v;

    scanf("%d %d",&A,&B);

	v=A-B;

	if(v<0){
		v=v*-1;
	}	

    if (v%2==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    } 
		
}   
}

// Problem
// Chef has two integers AA and BB. In one operation he can choose any integer d,d, and make one of the following two moves :

// Add dd to AA and subtract dd from BB.
// Add dd to BB and subtract dd from AA.
// Chef is allowed to make as many operations as he wants. Can he make AA and BB equal?

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, two integers A, BA,B.
// Output Format
// For each test case, if Chef can make the two numbers equal print YES else print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings yEs, Yes, YeS, and YES will all be treated as identical).