#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    cout << "floor " << a << " "
         << "/ " << b << " "
         << "= " << floor(a / b) << endl;
    cout << "ceil " << a << " "
         << "/ " << b << " "
         << "= " << ceil(a / b) << endl;
    cout << "round " << a << " "
         << "/ " << b << " "
         << "= " << round(a / b) << endl;
}