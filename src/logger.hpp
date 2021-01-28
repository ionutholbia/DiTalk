#pragma once

#include <iostream>

class Logger
{
public:
	void Log(const std::string& message)
	{
		std::cout<<"Write to Console: "<<message<<std::endl;
	}
};