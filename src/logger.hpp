#pragma once

#include <iostream>
#include "iLogger.hpp"

class Logger : public ILogger
{
public:	
	void Log(const std::string& message)
	{
		std::cout<<"Write to Console: "<<message<<std::endl;
	}
};