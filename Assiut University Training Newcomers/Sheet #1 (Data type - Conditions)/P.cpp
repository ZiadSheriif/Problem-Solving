#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x >= 10)
        x = x / 10;
    if (x % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
}