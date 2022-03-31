#pragma once
class InvalidEmail :
	public exception
{
public:
	InvalidEmail(string message) : exception(message.c_str())
	{

	}
};
