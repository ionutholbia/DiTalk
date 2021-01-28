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

	std::shared_ptr<ILogger> logger_; 
	std::shared_ptr<IMessageSender> messageSender_;

public:
	Chore(const std::shared_ptr<ILogger>& logger, const std::shared_ptr<IMessageSender>& messageSender) : 
		logger_(logger), messageSender_(messageSender) { }

	std::string getChoreName() { return choreName_; }
	void setChoreName(const std::string& choreName) { choreName_ = choreName; };

	std::shared_ptr<IPerson> getOwner() { return owner_; }
	void setOwner(const std::shared_ptr<IPerson>& owner) { owner_ = owner; }; 

	double getHoursWorked() { return hoursWorked_; }

	bool isComplete() { return isComplete_; }

	void performedWork(double hours)
	{
		hoursWorked_ += hours;
		
		logger_->Log(std::string(std::to_string(hours) + " hours performed work on " + choreName_));
	}

	void completeChore()
	{
		isComplete_ = true;

		logger_->Log(std::string("Completed ") + choreName_);

		messageSender_->sendMessage(owner_, std::string("The chore ") + choreName_ + " is complete.");
	}
};
