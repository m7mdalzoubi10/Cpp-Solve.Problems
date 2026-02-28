#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	void ReadNumbers(double& A,double& B)
	{
		cout << "please enter A :";
		cin >> A;

		cout << "please enter B :";
		cin >> B;
	}

	int calculateArea(double A, double B )
	{
		float Area = A * sqrt(A*A-B*B);

		return Area;
	}
}