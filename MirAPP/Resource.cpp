#include "Resource.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

Resource::Resource(string n):name(n)//when initind assign value to string name
{
	//why the CatFur(initValue) -> syntax

	cout << "constructing " << name << endl;

}


Resource::~Resource()
{
	cout << "De-structing " << name << endl;
}
