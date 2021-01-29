#pragma once

#include "person.hpp"
#include <memory>
#include <iostream>

class Emailer
{
public:

	void sendEmail(const std::shared_ptr<Person>& person, const std::string& message)
	{
		std::cout<<"Sending an email to "<<person->getEmailAddress().c_str()<<" to notify that "<<message.c_str()<<std::endl;
	}
};