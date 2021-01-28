#include "chore.hpp"
#include "logger.hpp"
#include "emailer.hpp"
#include <iostream>

int main(void)
{
	std::shared_ptr<Person> owner = std::make_shared<Person>();
	owner->setFirstName("Ionut");
	owner->setLastName("Holbia");
	owner->setPhoneNumber("77770000");
	owner->setEmailAddress("iholbia@ditalk.com");


	Chore chore;
	chore.setChoreName("Read some books.");
	chore.setOwner(owner);

	chore.performedWork(3);
	chore.performedWork(1.5);
	chore.completeChore();

	return 0;
}