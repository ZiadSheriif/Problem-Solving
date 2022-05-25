#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    if (x % y == 0 || y % x == 0)
        cout << "Multiples" << endl;
    else
        cout << "No Multiples" << endl;
}