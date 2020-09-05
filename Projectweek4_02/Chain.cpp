#include<stdio.h>
int main()
{
	long long x;
	long long count;
	long long ans = 0;
	for (long long i = 1; i <= 1000000; i++)
	{
		count = 0;
		x = i;
		while (x != 1)
		{
			if (x % 2 == 0)
			{
				x = x / 2;
				count++;
			}
			else
			{
				x = 3 * x + 1;
				count++;
			}
		}
		if (count > ans)
		{
			ans = count;
		}
	}
	printf("longest chain = %lld", ans);
	return 0;
}