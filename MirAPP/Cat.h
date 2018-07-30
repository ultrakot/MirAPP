#pragma once
#include <string>
#include "Resource.h"

class Cat
{
private:
	std::string name;
	std::string fur;
	int arbitrarynumber;
	Resource* pReasource;

public:
	Cat(std::string n, 
		std::string f,
		int num);
	//constructor
	Cat();//empty constructor 
	~Cat();//destructor
	std::string getName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
	void AddResource();
};

