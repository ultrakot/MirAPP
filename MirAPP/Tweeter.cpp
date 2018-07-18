#include "Tweeter.h"
#include <string>
#include <iostream>


Tweeter::Tweeter(std::string name,
	std::string fur,
	int arbitrary,
	std::string handle)
	:
	Cat(name,fur,arbitrary),
	twitterhandle(handle)
{
	std::cout << " contructing tweeter" << twitterhandle << std::endl;
}


Tweeter::~Tweeter()
{
	std::cout << " destructing tweeter" << twitterhandle << std::endl;
}
