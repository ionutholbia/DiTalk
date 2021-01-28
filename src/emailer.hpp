#pragma once

#include "iMessageSender.hpp"
#include <iostream>

class Emailer : public IMessageSender
{
public:

	void sendEmail(const std::shared_ptr<IPerson>& person, const std::string& message)
	{
		std::cout<<"Simulating sending an email to "<<person->getEmailAddress();
	}
};