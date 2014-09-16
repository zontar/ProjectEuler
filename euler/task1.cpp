#include "task.h"

const std::string taskName = "Task1";

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

//Сумма чисел кратных k до n
unsigned int sum(unsigned int k, unsigned int n)
{
	if(k>n) return 0;
	unsigned int count = (n-1)/k;
	return (count*(count+1)/2)*k;
}


int run()
{
	unsigned int n = 1000;
	unsigned int result = sum(3, n) + sum(5, n) - sum(15, n);
	std::cout << result;
	return 0;
}