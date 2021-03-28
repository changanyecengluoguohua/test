#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int  mu1 = 10;
	int  mu2 = 20;
	int max = 0;
	max = Max(mu1, mu2);
	printf("max = %d\n", max);
	return 0;
}