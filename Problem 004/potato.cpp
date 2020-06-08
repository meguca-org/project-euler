#include <cstdio>

int main()
{
	auto is_palindrome = [](int i) -> bool
	{
		if (i >= 100'000)
		{
			return (i % 10) == ((i / 100000) % 10) && ((i / 10) % 10) == ((i / 10000) % 10) && ((i / 100) % 10) == ((i / 1000) % 10);
		}
		else if (i >= 10'000)
		{
			return (i % 10) == ((i / 10000) % 10) && ((i / 10) % 10) == ((i / 1000) % 10);
		}
		else if (i >= 1'000)
		{
			return (i % 10) == ((i / 1000) % 10) && ((i / 10) % 10) == ((i / 100) % 10);
		}
		else if (i >= 100)
		{
			return (i % 10) == ((i / 100) % 10);
		}
		else if (i >= 10)
		{
			return (i % 10) == (i / 10);
		}
		else
		{
			return true;
		}
	};

	int best = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = i; j <= 999; j++)
		{
			const int k = i * j;
			if (k > best && is_palindrome(k))
			{
				best = k;
			}
		}
	}

	printf("%d\n", best);

	return 0;
}
