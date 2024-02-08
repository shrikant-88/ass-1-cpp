#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "enter radius :  ";
    cin >> r;
    if (r > 2)
    {
        cout << "area is bigger";
    }
    else if (r == 2)
    {
        cout << "both are equal";
    }
    else
    {
        cout << "parameter is bigger";
    }
    return 0;
}
