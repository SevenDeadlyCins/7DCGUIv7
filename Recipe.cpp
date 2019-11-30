#include "Recipe.h"

Recipe::Recipe()
{}

Recipe::~Recipe()
{}

void Recipe::displayMaterials()
{
    for (size_t i = 0; i < reqMaterials.size(); i++)
    {
        cout << "Material " << i + 1 << ": ";
        cout << reqMaterials[i] << endl;
    }
}

void Recipe::displayRecipe()
{
    for (size_t i = 0; i < recipeList.size(); i++)
    {
        cout << "Step " << i + 1 << ": ";
        cout << recipeList[i] << endl;
    }
    cout << endl;
}

void Recipe::displayIngredients()
{
    for (size_t i = 0; i < ingredients.size(); i++)
    {
        cout << "Ingredient " << i + 1 << ": ";
        cout << ingredients[i].getName() << endl;
    }
}

int Recipe::getIngredientListSize()
{
    return ingredients.size();
}
