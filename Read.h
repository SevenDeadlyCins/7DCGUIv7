#include <iostream>
#include "Cocktail.h"
#include "Ingredient.h"
#include "Recipe.h"
#include <fstream>
#include <vector>
#include <map>

class Read
{
private:
	string line;
	string drinkName;
	string ingredientName;
	string stype;
	type drinktype;
	string sprice;
	price dPrice;
	int proof;
    map<int, Cocktail> drinkMap;

public:
	Read();
    ~Read();
    map<int, Cocktail> returnMap()
    {
        return drinkMap;
    }

};

#pragma once
