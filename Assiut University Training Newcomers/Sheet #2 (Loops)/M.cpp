#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    bool test;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        test = true;
        int j = i;
        while (j >= 1)
        {
            int temp = j % 10;

            if (temp != 7 && temp != 4)
            {
                test = false;
                break;
            }
            j /= 10;
        }
        if (test)
        {
            cout << i << " ";
            count++;
        }
    }
    if (count == 0)
        cout << -1;
    return 0;
}