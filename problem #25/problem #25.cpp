#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please enter your Age: " << endl;
	cin >> Age;

	return Age;
}

static bool ValidAgeInRange(int Number, int from, int to)	//Genaric function
{
	return (Number >= from and Number <= to);
}


int ReadUntilAgeBetween(int from, int to)  //While loop until Entering the rigth Age
{
	int Age = 0;

	do
	{
		Age = ReadAge();
	}

	while (!ValidAgeInRange(Age, from, to));

	return Age;
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
  
	PrintResult(ReadUntilAgeBetween(18,55));

	return 0;
}