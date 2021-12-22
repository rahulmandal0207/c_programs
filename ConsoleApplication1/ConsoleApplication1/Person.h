#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"
#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	Birthday bd;
public:
	Person(string n, Birthday b);
	void printInfo();
protected:
};

#endif
