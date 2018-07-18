#include "Cat.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

std::string Cat::getName() const
{
	return "the " + fur + "-cat named " + name;
}

Cat::Cat(string n, string f, int num):fur(f),name(n),arbitrarynumber(num)
{
	cout << "constructing " << name << " " << fur << endl;
}
Cat::Cat() : arbitrarynumber(0) 
{
   cout << "constructing " << name << " " << fur << endl;
}
Cat::~Cat() 
{
	cout << "destructing " << name << " " << fur << endl;
}


