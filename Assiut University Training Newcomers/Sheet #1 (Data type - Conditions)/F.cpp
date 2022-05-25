#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    while (x >= 10)
        x %= 10;
    while (y >= 10)
        y %= 10;
    cout << x + y << endl;
}