#include <iostream>
using namespace std;
int main()
{
    int x, i, j;
    cin >> x;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}