#include "UserClass.h"

#include<iostream>

#include<vector>

using namespace std;

UserClass::UserClass()
{
	
}
void UserClass::addCabinet(Cabinet toAdd)
{
	list.push_back(toAdd);			 //cabinet insertion into the vector		
}

void UserClass::removeCabinet()
{
	list.pop_back();			 //pops cabinet out of vector
}

void UserClass::viewCabinet()			//this should just print out every element inside the Vector of cabinet
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << list.at(i).getName() << endl;

	}
}
