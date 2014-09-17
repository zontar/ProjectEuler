#include "task.h"
const std::string taskName = "Task5";

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int run()
{
	double primes[] = {2,3,5,7,11,13,17,19};
	int ans = 1;
	double magic = 20;
	for(int i=0; i<8; ++i)
	{
		int e = log10(magic)/log10(primes[i]);
		ans *= pow(primes[i],e);
	}
	std::cout << ans;
	return 0;
}