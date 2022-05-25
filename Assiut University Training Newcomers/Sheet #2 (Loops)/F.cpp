#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long i, n;
    cin >> n;
    for (i = 1; i < 13; i++)
        cout << n << " "
             << "* " << i << " "
             << "= " << n * i << endl;
}