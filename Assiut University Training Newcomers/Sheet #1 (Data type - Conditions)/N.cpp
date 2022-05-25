#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (65 <= int(x) && int(x) <= 90)
        x = tolower(x);
    else
        x = towupper(x);
    cout << x << endl;
}
