#include <stdio.h>

void main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{

		int N, B, si = 0;
		scanf("%d %d", &N, &B);

		while (N--)
		{
			int W, H, P;
			scanf("%d %d %d", &W, &H, &P);
			if (P <= B)
			{
				int size = W * H;
				if (size > si)
				{
					si = size;
				}
			}
		}
		if (si == 0)
		{
			printf("no tablet\n");
		}
		else
		{
			printf("%d\n", si);
		}
	}
}


// Problem
// Read problems statements in Hindi, Mandarin Chinese, Russian, Vietnamese and Bengali as well.
// Chef decided to buy a new tablet. His budget is BB, so he cannot buy a tablet whose price is greater than BB. Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible. Of course, the screen of a tablet is always a rectangle.

// Chef has visited some tablet shops and listed all of his options. In total, there are NN available tablets, numbered 11 through NN. For each valid ii, the ii-th tablet has width W_iW 
// i
// ​
//  , height H_iH 
// i
// ​
//   and price P_iP 
// i
// ​
//  .

// Help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.

// Input
// The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
// The first line of each test case contains two space-separated integers NN and BB.
// NN lines follow. For each ii (1 \le i \le N1≤i≤N), the ii-th of these lines contains three space-separated integers W_iW 
// i
// ​
//  , H_iH 
// i
// ​
//   and P_iP 
// i
// ​
//  .
// Output
// For each test case, print a single line. If Chef cannot buy any tablet, it should contain the string "no tablet" (without quotes). Otherwise, it should contain a single integer — the maximum area of the screen of a tablet Chef can buy.