#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    unsigned long long A, B, C, D, X, Z;
    cin >> A >> B >> C >> D;
    Z = ((((A % 100) * (B % 100)) % 100) * (((C % 100) * (D % 100)) % 100)) % 100;
    if (Z < 10)
    {
        cout << "0" << Z << endl;
    }
    else
        cout << Z << endl;
}
