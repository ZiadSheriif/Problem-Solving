#include <iostream>
using namespace std;
int main()
{
    long long x, years = 0, months = 0, days = 0;
    cin >> x;
    years = x / 365;
    months = (x % 365) / 30;
    days = (x % 365) % 30;
    cout << years << " "
         << "years" << endl;
    cout << months << " "
         << "months" << endl;
    cout << days << " "
         << "days" << endl;
}