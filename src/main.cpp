#include "chore.hpp"
#include "logger.hpp"
#include "emailer.hpp"
#include "person.hpp"
#include <iostream>

int main(void)
{
	std::shared_ptr<IPerson> owner = 
		std::make_shared<Person>("Ionut", "Holbia", "iholbia@ditalk.com", "77770000");

	Chore chore("Read some books.", owner);

	chore.performedWork(3);
	chore.performedWork(1.5);
	chore.completeChore();

	return 0;
}