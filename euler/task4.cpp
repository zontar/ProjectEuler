#include "task.h"
const std::string taskName = "Task4";

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

/*
Палиндром представим в виде 100000a + 10000b + 1000c + 100c + 10b + a.
После упрощения (9091*a + 910*b + 100*c)*11.
*/

int run()
{
	int r = 0;
	for(int a=9; a>0; --a)
	{
		for(int b=9; b>=0; --b)
		{
			for(int c=9; c>=0; --c)
			{
				int m = (9091*a + 910*b + 100*c);
				for(int i=10; i<=90; ++i)
				{
					if(m%i==0)
					{
						if(m/i>999) break;
						if(r<m) r=m;
					}
				}
			}
		}
	}
	std::cout << r*11;
	return 0;
}