#include <iostream>
using namespace std;


enum enOddorEven { Odd = 1, Even = 2 };


int ReadNumber()
{
	int Num;
	cout << "Please enter your Range: ";
	cin >> Num;

	return Num;
}


enOddorEven CheckOddorEven(int Number)
{
	if (Number % 2 != 0)
	{
		return enOddorEven::Odd;
	}
	else return enOddorEven::Even;

};


int SumofOddNumberFrom1toN_UsingWhile(int N)
{
	int counter = 0, sum = 0;


	cout << "Sum of Odd  using while loop : ";

	while (counter < N)
	{
		counter++;

		if (CheckOddorEven(counter) == enOddorEven::Odd)
		{
			sum += counter;
		}
	}

	return sum;
}


int SumOfOddNumber_UsingForLoop(int N)
{
	int sum = 0;

	cout << "Sum of Odd  using For loop : ";


	for (int counter = 0; counter <= N; counter++)
	{
		if (CheckOddorEven(counter) == enOddorEven::Odd)
		{
			sum += counter;
		}
	}

	return sum;
}


int SumofOddNumber_usingDoWhile(int N)
{
	int sum = 0, counter = 0;

	cout << "Sum of Odd  using Do while loop : ";


	do
	{
		counter++;

		if (CheckOddorEven(counter) == enOddorEven::Odd)
		{
			sum += counter;
		}

	} while (counter < N);

	return sum;
}


int main()
{
	int N = ReadNumber();

	cout << SumofOddNumberFrom1toN_UsingWhile(N) << endl;
	cout << SumofOddNumber_usingDoWhile(N) << endl;
	cout << SumOfOddNumber_UsingForLoop(N) << endl;

	return 0;
}