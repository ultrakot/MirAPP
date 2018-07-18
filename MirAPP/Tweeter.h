#pragma once
#include "Cat.h"
#include <string>

class Tweeter:
	public Cat
{
private:
	std::string twitterhandle;
public:
	Tweeter(std::string name,
		std::string fur,
		int arbitrary,
		std::string handle);
	~Tweeter();
};

