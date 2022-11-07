#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int N, M;
		scanf("%d %d", &N, &M);

		if (N % M != 0)
		{
			printf("NO\n");
		}

		else if ((N / M) % 2 == 0)
		{
			printf("YES\n");
		}

		else
		{
			printf("NO\n");
		}
	}
}


// Problem
// Chef has NN candies. He has to distribute them to exactly MM of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.

// NOTE: Chef will not take any candies himself and will distribute all the candies.

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, two integers NN and MM, the number of candies and the number of friends.
// Output Format
// For each test case, the output will consist of a single line containing Yes if Chef can distribute the candies as per the conditions and No otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).