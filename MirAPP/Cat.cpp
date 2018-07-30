#include "Cat.h"
#include "Resource.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;


Cat::Cat(string n, string f, int num):fur(f),name(n),arbitrarynumber(num), pReasource(nullptr)
{
	cout << "constructing " << name << " " << fur << endl;
}
Cat::Cat() : arbitrarynumber(0) 
{
   cout << "constructing " << name << " " << fur << endl;
}
Cat::~Cat() 
{
	delete pReasource;
	cout << "destructing " << name << " " << fur << endl;
}
std::string Cat::getName() const
{
	return "the " + fur + "-cat named " + name;
}
void Cat::AddResource() 
{
	pReasource = new Resource("Resource for " + getName());
}
