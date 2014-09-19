#include "task.h"
const std::string taskName = "Task10";

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

IntVector primes;
__int64 sum = 0;
const int N = 2000000;
int lp[N+1];

void getPrimes()
{
	for(int i=2; i<=N; ++i)
	{
		if(lp[i] == 0)
		{
			lp[i] = i;
			primes.push_back (i);
			sum += i;
		}
		for(int j=0; j<(int)primes.size() && primes[j]<=lp[i] && i*primes[j]<=N; ++j)
		{
			lp[i * primes[j]] = primes[j];
		}
	}
}



int run()
{
	getPrimes();
	std::cout << sum;
	return 0;
}