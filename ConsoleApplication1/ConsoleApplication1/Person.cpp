#include "Person.h"

Person::Person(string n, Birthday b)
	:name(n), bd(b)
{
}

void Person::printInfo()
{
	cout << name << " was born on ";
	bd.printDate();
}