#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    string f1, f2, l1, l2;
    cin >> f1 >> l1;
    cin >> f2 >> l2;
    if (l1 == l2)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;
}
