#include "task.h"
const std::string taskName = "Task9";

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int run()
{
	for(int a=1; a<998; ++a)
	{
		double db  = (500.0*(2.0*a-1000.0))/(a-1000.0);
		int b = db;
		if(fabs(db-b)<1e-8)
		{
			int c = 1000-a-b;
			std::cout << a*b*c;
			break;
		}
	}
	return 0;
}