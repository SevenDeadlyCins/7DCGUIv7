#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Cocktail.h"
#pragma once
using namespace std;


//Implementation

Cocktail::Cocktail()
{}


Cocktail::~Cocktail()
{}

Cocktail::Cocktail(string drinkName, Recipe recip, string content)
{
	name = drinkName;
	rec = recip;
	alc_cont = content;
}
string Cocktail::getName()
{
	return name;
}

void Cocktail::setName(string drinkName)
{
	name = drinkName;
}


void Cocktail::displayDrink()
{
	cout << name << " Recipe" << endl << endl;
	cout << "Required Materials:\n";
	rec.displayMaterials();
	cout << endl;
	cout << "Ingredients List:\n";
	rec.displayIngredients();
	cout << "\nSteps \n";
	rec.displayRecipe();
	cout << "Alcohol Content:\n";
	cout << alc_cont << endl << endl;
	cout << endl;
}
