#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please enter your Age: " << endl;
	cin >> Age;

	return Age;
}

static bool ValidAgeInRange(int Number ,int from, int to)	//Genaric function
{
	return (Number >= from and Number <= to);	//We don't need if statment instead put return 
}

void PrintResult(int Age)
{
	if (ValidAgeInRange(Age, 18, 50))
	{ 
		cout << Age << " is a valid age \n"; 
	}

	else 
	{ 
		cout << Age << " is an invalid age \n"; 
	}
}


int main()
{
	PrintResult(ReadAge());

	return 0;
}