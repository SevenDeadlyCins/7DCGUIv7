
/*
Ryann Palacio
CS441 - Software Engineering
Group Project - Cabinet Class
*/


// Cabinet.h file
#ifndef CABINET_H_
#define CABINET_H_
#include "Ingredient.h"
#include<vector>
using namespace std;

/*Update 11/4/2019 This Cabinet Class should now work in tandem with the Ingredient class properly. */

class Cabinet
{
private:

	vector<Ingredient> ingredientVect;

public:
	Cabinet();
	~Cabinet();
	void addIngredient(Ingredient toAdd); //inside parentheses is an Ingredient to insert into vector

	void removeIngredient(); // remove an ingredient from a vector

	void viewCabinet(); // prints everything inside of the Ingredient Vector 
	


};

#endif#pragma once
