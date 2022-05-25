#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double r, area;
    cin >> r;
    area = 3.141592653 * pow(r, 2);
    cout << fixed << setprecision(9) << area << endl;
}