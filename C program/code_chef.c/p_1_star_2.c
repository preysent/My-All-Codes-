
#include <stdio.h>

void main()
{
	int T;

	scanf("%d", &T);
	while (T--)

	{
		int N, R = 0;

		scanf("%d", &N);

		if (N % 2 == 0)
		{			
			for (int i = N - 1; i > 0; i = i - 2)
			{
				R += N - i;
			}
			printf("%d\n", R * 2);
		}
		else if(N%2==1){
			for (int i = N - 2; i > 0; i = i - 2)
			{
				R += N - i;
			}
			printf("%d\n", R * 2);
		}
	}
}


// Problem
// Given an integer NN, determine the number of pairs (A, B)(A,B) such that:

// 1 \leq A, B \leq N1≤A,B≤N;
// A + BA+B is odd.
// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single integer NN.
// Output Format
// For each test case, output the number of required pairs.