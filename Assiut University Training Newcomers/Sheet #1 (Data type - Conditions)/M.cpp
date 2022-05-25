#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (65 <= int(x) && int(x) <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (97 <= int(x) && int(x) <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else
        cout << "IS DIGIT" << endl;
}
