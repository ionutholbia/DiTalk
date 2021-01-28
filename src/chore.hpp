#pragma once

#include "logger.hpp"
#include "emailer.hpp"
#include "iChore.hpp"

class Chore : public IChore
{
private:

	std::string choreName_;
	std::shared_ptr<IPerson> owner_;
	double hoursWorked_;
	bool isComplete_;

public:
	Chore(const std::string choreName, const std::shared_ptr<IPerson>& owner) :
		choreName_(choreName), owner_(owner) { }

	std::string getChoreName() { return choreName_; }

	std::shared_ptr<IPerson> getOwner() { return owner_; }

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
