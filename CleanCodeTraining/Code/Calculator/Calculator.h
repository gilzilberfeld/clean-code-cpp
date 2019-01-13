#pragma once
class Calculator
{
public:
	void Press(string key);
	string GetDisplay();

private:
	string storedValue = "";
};

