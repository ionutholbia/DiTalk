#include "factory.hpp"
#include <iostream>

int main(void)
{
	auto owner = Factory::createPerson();
	owner->setFirstName("Ionut");
	owner->setLastName("Holbia");
	owner->setEmailAddress("iholbia@ditalk.com");
	owner->setPhoneNumber("77770000");

	auto chore = Factory::createChore();
	chore->setChoreName("Read some books.");
	chore->setOwner(owner);

	chore->performedWork(3);
	chore->performedWork(1.5);
	chore->completeChore();

	return 0;
}