#include <iostream>
using namespace std;


int ReadPositiveNumbers(string Message)
{
    int Number;

    do
    {
        cout << Message;
        cin >> Number;

    } while (Number < 0);


        return Number;
}


int Factorial(int N)
{
    int F = 1;

    for (int Counter = N; Counter >= 1 ; Counter--)
    {
        F = Counter * F;

    }

    return F;
}


int main()
{

    cout << Factorial(ReadPositiveNumbers("Enter Number: ")) << endl;

    return 0;
}