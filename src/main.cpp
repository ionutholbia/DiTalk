#include "chore.hpp"
#include "logger.hpp"
#include "emailer.hpp"
#include "texter.hpp"
#include "person.hpp"

#include <iostream>

#include <boost/di.hpp>
namespace di = boost::di;

int main(void)
{
	auto injector = di::make_injector(
		di::bind<IPerson>.to<Person>(),
		di::bind<IChore>.to<Chore>(),
		di::bind<ILogger>.in(di::singleton).to<Logger>(),
		di::bind<IMessageSender>.in(di::singleton).to<Texter>()
	);

	auto owner = injector.create<std::shared_ptr<IPerson>>();
	owner->setFirstName("Ionut");
	owner->setLastName("Holbia");
	owner->setEmailAddress("iholbia@ditalk.com");
	owner->setPhoneNumber("77770000");
	
	auto chore = injector.create<std::shared_ptr<IChore>>();
	chore->setOwner(owner);
	chore->setChoreName("Read some books.");

	chore->performedWork(3);
	chore->performedWork(1.5);
	chore->completeChore();

	return 0;
}