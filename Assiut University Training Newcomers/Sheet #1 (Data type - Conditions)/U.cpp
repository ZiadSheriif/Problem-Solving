#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    float x;
    cin >> x;
    if (int(x) == x)
        cout << "int " << x << endl;
    else
        cout << "float " << int(x) << " " << fixed << setprecision(4) << x - int(x) << endl;
}
