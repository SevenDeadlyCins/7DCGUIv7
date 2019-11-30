/*
Ryann Palacio
CS441 - Software Engineering
Group Project - Cabinet Class
*/

#include "Ingredient.h"

#include "cabinetClass.h"

#include<iostream>

#include<vector>

using namespace std;

Cabinet::Cabinet()
{
	
}
void Cabinet::addIngredient(Ingredient toAdd)
{
	ingredientVect.push_back(toAdd);			 //ingredient insertion into the vector		
}

void Cabinet::removeIngredient()
{
	ingredientVect.pop_back();			 //pops ingredient out of vector
}

void Cabinet::viewCabinet()			//this should just print out every element inside the Vector of ingredients
{
	for (int i = 0; i < ingredientVect.size(); i++)
	{
		cout << ingredientVect.at(i).getName() << endl;

	}
}