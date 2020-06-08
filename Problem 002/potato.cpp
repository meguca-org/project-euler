#include <cstdio>

int main()
{
	int sum = 0;
	int f = 1;
	int fp = 1;
	while (f < 4'000'000)
	{
		if (f % 2 == 0)
		{
			sum += f;
		}

		int fn = f + fp;
		fp = f;
		f = fn;
	}

	printf("%d\n", sum);

	return 0;
}
