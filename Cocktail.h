#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Recipe.h"
using namespace std;

#ifndef DRINK_H
#define DRINK_H

//Class declaration
class Cocktail
{
private:
	string name;
	Recipe rec;
	string alc_cont;
	string description;
    string image;
	friend class Read;

public:
    Cocktail();
    ~Cocktail();
    Cocktail(string drinkName, Recipe recip, string content);
	//int calculate_alcohol();
	string getName();
    string getDescription()
    {return description;}
    Recipe returnRecipe()
    {return rec;}
    int RecipeLength()
    {return rec.getRecipeLength();}
	void setName(string drinkName);
	void displayDrink();
};

#endif
