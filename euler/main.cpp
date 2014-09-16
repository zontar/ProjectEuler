#include <fstream>
#include <windows.h>
#include "task.h"

extern const std::string taskName;

int main()
{
	std::string fileName = "../results/";
	fileName += taskName;
	fileName += ".txt";
	std::freopen(fileName.data(), "w", stdout);

	LARGE_INTEGER bTime, eTime, freq, elapsed;

	QueryPerformanceFrequency(&freq); 
	QueryPerformanceCounter(&bTime);
	std::cout << "run on " << bTime.QuadPart << std::endl;
	std::cout				<< "----------------------------------------------------------------------------" << std::endl;
	run();
	QueryPerformanceCounter(&eTime);
	elapsed.QuadPart = eTime.QuadPart - bTime.QuadPart;
	std::cout << std::endl	<< "----------------------------------------------------------------------------" << std::endl;
	std::cout << "finished on " << eTime.QuadPart << std::endl;
	std::cout << "ticks: " << elapsed.QuadPart << "; time: " << (double)elapsed.QuadPart / freq.QuadPart * 1000000.0 <<  std::endl;
	
	return 0;
}