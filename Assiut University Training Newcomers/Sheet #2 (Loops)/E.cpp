#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long i, x[10000], n;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> x[i];
    sort(x, x + n);
    cout << x[n - 1] << endl;
}