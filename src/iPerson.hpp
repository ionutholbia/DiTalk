#pragma once

#include <string>

class IPerson
{
public:
	virtual std::string getFirstName() = 0;

	virtual std::string getLastName() = 0;

	virtual std::string getPhoneNumber() = 0;

	virtual std::string getEmailAddress() = 0;
};
