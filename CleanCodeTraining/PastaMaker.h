#pragma once
class PastaMaker
{
public:
	void Cook(SauceType sauce, PastaType pastaType);

private:
	Ingredient* GetIngredient(IngredientType ingredient, Place place); 
	Ingredient* GetPasta(PastaType pasta, Place place); 

	void Fill(vector<Ingredient*> sauceIngredients) { }
	void Prepare(Ingredient* ingredient) { }
	void CookPasta() { }
	void AddSauce() { }
};

