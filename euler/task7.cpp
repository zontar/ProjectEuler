#include "task.h"
#include <vector>
const std::string taskName = "Task7";

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

int run()
{
	std::vector<int> primes;
	int currentNumber = 2;
	while(primes.size()<10001)
	{
		bool isPrime = true;
		for(int i=0; i<primes.size(); ++i)
			if(currentNumber%primes[i]==0)
			{
				isPrime = false;
				break;
			}
		if(isPrime) primes.push_back(currentNumber);
		++currentNumber;
	}
	std::cout << primes.back();
	return 0;
}