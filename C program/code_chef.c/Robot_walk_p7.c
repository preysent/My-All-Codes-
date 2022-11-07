#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, x, v, min, max ;
		scanf("%d %d", &n, &x);
		min=x, max=x, v = x;
		char s[n];
		scanf("%s", s);			

		for (int i = 0; i < n; i++)
		{			
			if (s[i] == 'R')
			{
				v++;
				if (v > max)
				{
					max = v;
				}
			}
			if (s[i] == 'L')
			{
				v--;
				if (v < min)
				{
					min = v;
				}
			}
		}
		printf("%d\n",1+ max - min);
	}

	return 0;
}


// Problem
// Read problems statements Mandarin , Bengali , Hindi , Russian and Vietnamese as well.
// Chef has bought a new robot, which will be used for delivering dishes to his customers. He started testing the robot by letting it move on a line.

// Initially, the robot is placed at the coordinate x = Xx=X. Then, it should execute a sequence of NN commands, described by a string SS with length NN. Each character of this string is either 'L' or 'R', denoting that the robot should walk one step to the left (decreasing xx by 11) or to the right (increasing xx by 11), respectively.

// How many distinct points are visited by the robot when it has executed all the commands? A point pp is visited by the robot if pp is an integer and the robot's position before or after executing some command is x = px=p.

// Input
// The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
// The first line of each test case contains two space-separated integers NN and XX.
// The second line contains a single string SS with length NN.
// Output
// For each test case, print a single line containing one integer ― the number of points visited by the robot.