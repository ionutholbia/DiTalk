#pragma once

#include "iMessageSender.hpp"
#include <iostream>

class Emailer : public IMessageSender
{
public:

	void sendMessage(const std::shared_ptr<IPerson>& person, const std::string& message)
	{
		std::cout<<"Sending an email to "<<person->getEmailAddress().c_str()<<" to notify that "<<message.c_str()<<std::endl;
	}
};