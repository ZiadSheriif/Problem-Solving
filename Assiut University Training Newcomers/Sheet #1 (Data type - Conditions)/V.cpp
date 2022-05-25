#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if ((a > b && s == '>') || (a < b && s == '<') || (a == b && s == '='))
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
}
