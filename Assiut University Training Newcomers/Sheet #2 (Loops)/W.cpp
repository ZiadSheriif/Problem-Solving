#include <iostream>
using namespace std;
int main()
{
    int n, i, j, space;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)

            cout << " ";
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (space = 1; space <= n - i; space++)

            cout << " ";
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
