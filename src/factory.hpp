#pragma once

#include "chore.hpp"
#include "logger.hpp"
#include "emailer.hpp"
#include "person.hpp"

class Factory
{
public:
	static std::shared_ptr<IPerson> createPerson()
	{
		return std::make_shared<Person>();
	}

	static std::shared_ptr<IChore> createChore()
	{
		return std::make_shared<Chore>(createLogger(), createMessageSender());
	} 

	static std::shared_ptr<ILogger> createLogger()
	{
		return std::make_shared<Logger>();
	} 

	static std::shared_ptr<IMessageSender> createMessageSender()
	{
		return std::make_shared<Emailer>();
	} 
};
