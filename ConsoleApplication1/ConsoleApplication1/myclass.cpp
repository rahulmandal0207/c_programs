#include <iostream>
#include "myclass.h"

using namespace std;

Myclass::Myclass()
{
	cout << "Constructing" << endl;
}

Myclass::~Myclass()
{
	cout << "Destructing" << endl;
}

void Myclass::test() const
{
	cout << "Test passed" << endl;
}