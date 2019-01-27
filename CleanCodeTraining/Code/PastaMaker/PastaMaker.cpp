#include "..\..\pch.h"
#include "IngredientType.h"
#include "Ingredient.h"
#include "Place.h"
#include "SauceType.h"
#include "PastaType.h"
#include "PastaMaker.h"


void PastaMaker::Cook(SauceType sauce, PastaType pastaType)
{
	vector<Ingredient*> ingredients(10);
	if (sauce == Alfredo)
	{
		ingredients.push_back(GetIngredient(Cream, Refrigarator));
	}
	else if (sauce == Bolognese || sauce == Marinara)
	{
		ingredients.push_back(GetIngredient(Tomato, Garden));
	}
	else if (pastaType == Ravioly)
	{
		vector<Ingredient*> tempIngredients(ingredients);
		ingredients.clear();
		ingredients.push_back(GetPasta(Ravioly, Freezer));
		copy(tempIngredients.begin(), tempIngredients.end(), back_inserter(ingredients));
	}
	else if (sauce == Pesto || sauce == Marinara)
	{
		ingredients.push_back(GetIngredient(Basil, Garden));
	}
	else if (sauce == Marinara)
	{
		ingredients.push_back(GetIngredient(Onion, Garden));
	}
	else if (pastaType == FreshSpaghetti)
	{
		ingredients.push_back(GetPasta(FreshSpaghetti, Freezer));
	}
	if (ingredients[0]->isPastaType())
	{
		vector<Ingredient*> fillingIngredients(&ingredients[1], &ingredients[ingredients.size() - 1]);
		Prepare(ingredients[0]);
		Fill(fillingIngredients);
		CookPasta();
	}
	else
	{
		CookPasta();
		vector<Ingredient*> sauceIngredients(&ingredients[0], &ingredients[ingredients.size() - 1]);
		Prepare(ingredients[ingredients.size() - 1]);
		Fill(sauceIngredients);
		AddSauce();
	}
}

Ingredient* PastaMaker::GetIngredient(IngredientType ingredient, Place place) 
{ 
	return new Ingredient(false); 
}

Ingredient* PastaMaker::GetPasta(PastaType pasta, Place place)
{ 
	return new Ingredient(true); 
}
