#include <cstdio>

int main()
{
	int v = []() -> int
	{
		for (int a = 998; a >= 1; --a)
		{
			for (int b = 1000 - a - 1; b >= 1; --b)
			{
				const int c = 1000 - a - b;
				if (a * a + b * b == c * c)
				{
					return a * b * c;
				}
			}
		}
		return -1;
	}();

	printf("%d\n", v);

	return 0;
}
