#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long a, b, c, d;
    long long diff;
    cin >> a >> b >> c >> d;
    diff = (a * b) - (c * d);
    cout << "Difference "
         << "= " << diff << endl;
}