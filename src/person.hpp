#pragma once

#include "iPerson.hpp"

class Person : public IPerson
{
private:
	std::string firstName_;
	std::string lastName_;
	std::string phoneNumber_;
	std::string emailAddress_;

public:
	Person(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber, const std::string& emailAddress) :
		firstName_(firstName), lastName_(lastName), phoneNumber_(phoneNumber), emailAddress_(emailAddress) { }
	
	std::string getFirstName() { return firstName_; }

	std::string getLastName() { return lastName_; }

	std::string getPhoneNumber() { return phoneNumber_; }

	std::string getEmailAddress() { return emailAddress_; }
};

	
