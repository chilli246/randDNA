#include <iostream>
#include <string>
#include <vector>
using namespace std;



string randDNA (int seed, string bases, int n)
{
	random_device rd;
	mt19937 eng1 (seed);
	
	int min = 10, max = 100;
	
	uniform_int_distribution <int> un (min, max);
	
	
