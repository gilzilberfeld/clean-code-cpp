#include "..\..\pch.h"
#include "Ingredient.h"


Ingredient::Ingredient(bool isPastaType)
{
	isPasta = isPastaType;
}


bool Ingredient::isPastaType()
{
	return isPasta;
}
