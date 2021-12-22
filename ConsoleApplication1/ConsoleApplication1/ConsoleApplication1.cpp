#include <iostream>

using namespace std;

class Myclass
{
public:
	Myclass(int a) : regVar(a)
	{

	} 
private:
	int regVar;
};

int main()
{
	Myclass c1(5);
	return 0;
}

