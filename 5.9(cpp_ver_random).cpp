#include <iostream>
#include <cstdlib>	//std::rand(), std::scrand()
#include <ctime>	//std:::time()
#include <random>	

using namespace std;

int main()
{
	
	std::random_device rd;
	std::mt19937 mersenne(rd());
	std::uniform_int_distribution<> dice(1, 6);
	
	for(int count = 1; count <= 20; ++count)
		cout <<dice(mersenne) << endl
	
	return 0;
}
