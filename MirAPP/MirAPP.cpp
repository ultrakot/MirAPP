// MirAPP.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include "Cat.h"
#include "Tweeter.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;

#include "Utility.h"
#include "Accum.h"
#include <cassert>;
#include "Resource.h"

int main()
{
	



	//{
	//	Resource localResource("local");
	//	string localString = localResource.GetName();
	//}
	//Resource* pResource = new Resource("created with new");
	//string newString = pResource->GetName();
	//int j = 3;
	////if (j == 3)
	////{
	////	return 0;
	////}MEMORY LEAK

	//delete pResource;


	////tring string3 = pResource->GetName(); GOES kaBOOM

	//Resource* p2 = pResource;

	//delete pResource;
	//string string2 = p2->GetName();
	//delete pResource;
	//delete p2;

#pragma region Const in inDirection
	//int i = 3;
	//int const ci = 3;
	//i = 2;
	////ci = 4;

	//int& ri = i;
	//i = 5;

	//int const & cri = i;
	////cri = 5;

	////int& ncri = ci;
	//int j = 10;
	//int DoubleJ = DoubleIt(j);
	//int DoubleJten = DoubleIt(10);

	//Cat kotea("vasily", "stripes", 14);
	//kotea.SetNumber(1234);
	//Cat const cKotea = kotea;//unchangeble copy of the cat object;
	//						 //cKotea.SetNumber(333);
	//int catNumber = cKotea.GetNumber();

	//// Cat *pCat = &cKotea; //not same type???


	//int* pI = &i;
	////int* pII = &pI;// type int** &pointer is of type int**
	////pI = &kotea;

	//int const * pcI = pI;//poinst to a const
	//					 //*pcI = 4;
	//pcI = &j;
	//j = *pcI;

	//int * const cpI = pI;//const pointer
	//*cpI = 4;
	////cpI = &j;

	//int const * const crazy = pI;//const poiner to a const thing
	//							 //*crazy = 4;
	//							 //crazy = &j;
	//j = *crazy;
#pragma endregion
	return 0;

}

int DoubleIt(int const& num) //lets say it has a horribly big and complex integer 
{
	return num*2; 
}