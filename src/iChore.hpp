#pragma once

#include <memory>
#include "iPerson.hpp"

class IChore
{
public:
	virtual std::string getChoreName() = 0;
	virtual void setChoreName(const std::string& choreName) = 0;

	virtual std::shared_ptr<IPerson> getOwner() = 0;
	virtual void setOwner(const std::shared_ptr<IPerson>& owner) = 0;

	virtual double getHoursWorked() = 0;

	virtual bool isComplete() = 0;

	virtual void performedWork(double hours) = 0;

	virtual void completeChore() = 0;
};