#pragma once

#include <string>

class IPerson
{
public:
	virtual std::string getFirstName() = 0;
	virtual void setFirstName(const std::string& firstName) = 0;

	virtual std::string getLastName() = 0;
	virtual void setLastName(const std::string& lastName) = 0;

	virtual std::string getPhoneNumber() = 0;
	virtual void setPhoneNumber(const std::string& phoneNumber) = 0;

	virtual std::string getEmailAddress() = 0;
	virtual void setEmailAddress(const std::string& emailAddress) = 0;
};