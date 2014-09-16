#include <fstream>
#include <time.h>
#include "task.h"

extern const std::string taskName;

int main()
{
	std::string fileName = "../results/";
	fileName += taskName;
	fileName += ".txt";
	std::freopen(fileName.data(), "w", stdout);
	clock_t bTime = clock();
	std::cout << "run on " << bTime << std::endl;
	std::cout << "----------------------------------------------------------------------------" << std::endl;
	run();
	clock_t eTime = clock();
	std::cout << std::endl << "----------------------------------------------------------------------------" << std::endl;
	std::cout << "finished on " << eTime << std::endl;
	std::cout << "time: " << eTime-bTime << std::endl;
	return 0;
}