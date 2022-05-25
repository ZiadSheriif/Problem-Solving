#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        bool test = true;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                test = false;
        }
        if (test == true || i == 2)
            cout << i << " ";
    }
    return 0;
}
