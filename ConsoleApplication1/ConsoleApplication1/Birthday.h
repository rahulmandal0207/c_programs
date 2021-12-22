#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <iostream>

using namespace std;


class Birthday
{
private:
	int date;
	int month;
	int year;
public:
	Birthday(int d, int m, int y);
	void printDate();
protected:
};

#endif