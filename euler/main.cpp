#define TASK "NoTask"
#include <fstream>
#include <iostream>

int main()
{
	std::string fileName = "../results/";
	fileName += TASK;
	fileName += ".txt";
	std::freopen(fileName.data(), "w", stdout);
	return 0;
}