#include "pch.h"
#include "Logger.h"


void Logger::Log(string message, string param)
{
	string messageWithParam = "Log: " + message + " " + param;
	cout << messageWithParam;
}
