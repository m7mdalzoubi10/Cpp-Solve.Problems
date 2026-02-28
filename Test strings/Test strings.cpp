#include <iostream>
#include <string>
using namespace std;


int main()
{
    string My_Numbers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", s1 = "10", s2 = "20";
    string s3 = s1 + s2;

    cout << "My Alfapet " << My_Numbers.length() << endl;
    cout << "s1 + s2 :" << s3 << endl;  // Will print 1020 because it is string 
    cout << My_Numbers[5] << endl; // Will print F

    int sum = stoi(s1) + stoi(s2);
    cout << sum << endl;  //Will print 30

    return 0;
}