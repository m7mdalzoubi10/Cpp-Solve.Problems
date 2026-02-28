#include <iostream>
using namespace std;

void ReadNumbers(int& A, int& B, int& C)
{
	cout << "Please enter Number A: ";
	cin >> A;

	cout << "Please enter Number B: ";
	cin >> B;

	cout << "Please enter Number C: ";
	cin >> C;
}

int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
		{
			return A;
		}
		else return C;

		else if (B > C)
		{
			return B;
		}
		else return C;

}

void PrintResult(int MaxOf3Numbers)
{ 
	cout << "The biggest Number of the A ,B ,C is : " << MaxOf3Numbers;
}


int main()
{
	int A, B, C;

	ReadNumbers(A,B,C);
	PrintResult(MaxOf3Numbers(A, B, C));

	return 0;
}