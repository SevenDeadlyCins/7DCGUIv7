#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Ingredient.h"
using namespace std;

#pragma once


//Class declaration
class Recipe
{
private:
    vector<string> recipeList;
    vector<string> reqMaterials;
    vector<Ingredient> ingredients;
    friend class Read;

public:
    Recipe();
    ~Recipe();
    void readDrinkName();
    void readRecipe();
    void displayRecipe();
    void readMaterials();
    void displayMaterials();
    Recipe addIngredient(Ingredient newIngredient);
    void displayIngredients();
    int getIngredientListSize();
    int getRecipeLength()
    {return recipeList.size();}
    vector<string> returnRecipe()
    {
        return recipeList;
    }
};

