#pragma once

#include <string>

class Person
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
	void setFirstName(const std::string& firstName) { firstName_ = firstName; }

	std::string getLastName() { return lastName_; }
	void setLastName(const std::string& lastName) { lastName_ = lastName; }

	std::string getPhoneNumber() { return phoneNumber_; }
	void setPhoneNumber(const std::string& phoneNumber) { phoneNumber_ = phoneNumber; }

	std::string getEmailAddress() { return emailAddress_; }
	void setEmailAddress(const std::string& emailAddress) { emailAddress_ = emailAddress; }
};

	
