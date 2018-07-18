#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool IsPrime(int x) 
{
	bool prime = true;
	for (int i = 2; i < x/2; i = i+1)
	{
		int factor = x / 2;
		if (factor*i == x)
		{
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
	}
	return prime;
}

bool Is2MorePrime(int x) 
{
	x = x + 2;
	return IsPrime(x);
}