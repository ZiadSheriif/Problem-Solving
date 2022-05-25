#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long long x, sum = 0;
    cin >> x;
    sum = (x * (1 + x)) / 2;
    cout << sum << endl;
}