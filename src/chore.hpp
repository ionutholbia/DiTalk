#pragma once

#include "person.hpp"
#include <memory>

class Chore
{
private:

	std::string choreName_;
	std::shared_ptr<Person> owner_;
	double hoursWorked_;
	bool isComplete_;

public:
	Chore(/* args */);

	std::string getChoreName() { return choreName_; }

	std::shared_ptr<Person> getOwner() { return owner_; }

	double getHoursWorked() { return hoursWorked_; }

	bool isComplete() { return isComplete_; }
};
