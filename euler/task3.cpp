#include "task.h"
#include <vector>
const std::string taskName = "Task3";

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

typedef std::vector<int> IntVector;

IntVector dividers(__int64 value)
{
	IntVector result;
	__int64 x = value/2;
	__int64 iterCount = 0;
	while(x>1)
	{
		while(x > 1 && value%x != 0){ --x; ++iterCount;}
		if(x>1)
		{
			result.push_back(value/x);
			value = x;
 			x = value/2;
		}
		else result.push_back(value);
	}
	return result;
}

IntVector rdividers(__int64 value)
{
	IntVector result;
	__int64 x = 2;
	__int64 iterCount = 0;
	while(value > 1)
	{
		while(x<value/2 && value%x != 0) {++x; ++iterCount;}
		if(x<value/2)
		{
			result.push_back(x);
			value /= x;
			++x;
		}
		else{ result.push_back(value); value = 1;}
	}

	return result;
}


int run()
{
	IntVector d = rdividers(600851475143);
	std::cout << d.back();
	return 0;
}