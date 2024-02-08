#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter a year : ";
    cin >> year;
    if (year > 1900 && year < 3000)
    {
        if (year % 4 == 0)
        {
            cout << "leap year";
        }
        else
        {
            cout << "not a leap year";
        }
    }
    else
    {
        cout << "enter year b/w 1900 and 3000";
    }
}