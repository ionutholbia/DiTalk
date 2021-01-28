#pragma once

#include "iMessageSender.hpp"
#include <iostream>

class Texter : public IMessageSender
{
public:

	void sendEmail(const std::shared_ptr<IPerson>& person, const std::string& message)
	{
		std::cout<<"Texting to "<<person->getEmailAddress().c_str()<<" "<<message.c_str()<<std::endl;
	}
};