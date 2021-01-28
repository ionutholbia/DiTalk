#pragma once

#include "iMessageSender.hpp"
#include <iostream>

class Texter : public IMessageSender
{
public:

	void sendMessage(const std::shared_ptr<IPerson>& person, const std::string& message)
	{
		std::cout<<"Texting to "<<person->getPhoneNumber().c_str()<<" to notify that "<<message.c_str()<<std::endl;
	}
};