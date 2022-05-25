#include <iostream>
using namespace std;
int main()
{
    int i, a, b, j;

    do
    {
        int sum = 0;
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            if (a >= b)
            {
                for (j = b; j <= a; j++)
                    sum += j;

                for (j = b; j <= a; j++)
                    cout << j << " ";
            }
            else
            {
                for (j = a; j <= b; j++)

                    sum += j;

                for (j = a; j <= b; j++)
                    cout << j << " ";
            }
            cout << "sum =" << sum << endl;
        }
    } while (a > 0 && b > 0);
}
