#include "task.h"
const std::string taskName = "Task12";

/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
Let us list the factors of the first seven triangle numbers:
 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.
What is the value of the first triangle number to have over five hundred divisors?
*/

IntVector primes;
const uint N = 100000000;
uint lp[N+1];

void getPrimes()
{
	for(uint i=2; i<=N; ++i)
	{
		if(lp[i] == 0)
		{
			lp[i] = i;
			primes.push_back(i);
		}
		for(uint j=0; j<primes.size() && primes[j]<=lp[i] && i*primes[j]<=N; ++j)
		{
			lp[i*primes[j]] = primes[j];
		}
	}
}

int run()
{
	getPrimes();
	std::map<int, int> f;
	uint maxn = 0;
	uint rk = 0;
	for(uint i=3; i<N && maxn<500; ++i)
	{
		f.clear();
		uint k = i;
		while(k>1)
		{
			f[lp[k]]++;
			k/=lp[k];
		}

		k = i+1;
		while(k>1)
		{
			f[lp[k]]++;
			k/=lp[k];
		}
		f[2]--;
		uint num = 1;
		for(std::map<int,int>::iterator j=f.begin(); j != f.end(); ++j)
		{
			num*=(j->second+1);
		}
		if(maxn<num)
		{
			maxn=num;
			rk = i;
		}
	}
	__int64 sum = 1;
	for(std::map<int,int>::iterator j=f.begin(); j != f.end(); ++j)
	{
		sum *= pow((float)j->first, j->second);
	}
	std::cout << sum;
	return 0;
}