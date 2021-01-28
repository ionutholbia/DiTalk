#pragma once

#include "person.hpp"
#include "logger.hpp"
#include "emailer.hpp"
#include <memory>

class Chore
{
private:

	std::string choreName_;
	std::shared_ptr<Person> owner_;
	double hoursWorked_;
	bool isComplete_;

public:
	std::string getChoreName() { return choreName_; }
	void setChoreName(const std::string& choreName) { choreName_ = choreName; }

	std::shared_ptr<Person> getOwner() { return owner_; }
	void setOwner(const std::shared_ptr<Person>& owner) { owner_ = owner; }

	double getHoursWorked() { return hoursWorked_; }

	bool isComplete() { return isComplete_; }

	void performedWork(double hours)
	{
		hoursWorked_ += hours;
		
		Logger log;
		log.Log(std::string(std::to_string(hours) + " hours performed work on " + choreName_));
	}

	void completeChore()
	{
		isComplete_ = true;

		Logger log;
		log.Log(std::string("Completed ") + choreName_);

		Emailer emailer;
		emailer.sendEmail(owner_, std::string("The chore ") + choreName_ + " is complete.");
	}
};
