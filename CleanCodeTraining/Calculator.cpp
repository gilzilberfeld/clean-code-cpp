#include "pch.h"
#include "Calculator.h"


void Calculator::Press(string key)
{
	if (key != "0")
	{
		storedValue += key;
	}
	else
		storedValue = key;

}

string Calculator::GetDisplay() {
	return storedValue;
}


