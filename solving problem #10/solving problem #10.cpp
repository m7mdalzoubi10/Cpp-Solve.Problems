#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& a, float& b)
{
    cout << "Please enter a: ";
    cin >> a;

    cout << "Please enter b: ";
    cin >> b;
}

float CalculateArea(float a, float b)
{
    const float PI = 3.141592653589793238;

    float Area = PI * (pow(b,2) / 4) * ((2 * a-b) / (2 * a+b)) ;

    return Area;
}

void PrintResult(float Area)
{
    cout << "The Area is : " << Area;
}


int main()
{
    float a, b;

    ReadNumbers(a,b);
    PrintResult(CalculateArea(a,b));
}