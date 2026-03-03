#include <iostream>
using namespace std;

int ReadN()
{
	int N;
	cout << "Please enter your Range: ";
	cin >> N;

	return N;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
	int count = 0;
	cout << "Range Printed using While Loop. ";

	while (count < N)
	{
		count++;
		cout << count << " ";
	}

	cout << endl;
}


void PrintRangeFrom1toN_UsingFor(int N)
{
	cout << "Range Printed using For Loop. ";

	for (int count = 1; count <= N; count++)
	{
		cout << count << " ";
	}

	cout << endl;
}


void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	int count = 0;
	cout << "Range printed using Do While. ";
	
	do
	{
		count++;
		cout << count << " " ;

	} while (count < N);

	cout << endl;
}


int main()
{
	int N = ReadN();

	PrintRangeFrom1toN_UsingFor(N);
	PrintRangeFrom1toN_UsingWhile( N);
	PrintRangeFrom1toN_UsingDoWhile( N);

	return 0;
}