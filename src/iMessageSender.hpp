#pragma once

#include "iPerson.hpp"
#include <memory>

class IMessageSender
{
public:

	virtual void sendEmail(const std::shared_ptr<IPerson>& person, const std::string& message) = 0;
};