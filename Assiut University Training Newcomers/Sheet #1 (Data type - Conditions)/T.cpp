#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int i, x[3], arr[3], j, temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 3; i++)
    {
        x[i] = arr[i];
    }
    sort(arr, arr + 3);

    for (i = 0; i < 3; i++)
        cout << arr[i] << endl;
    cout << endl;
    for (i = 0; i < 3; i++)
        cout << x[i] << endl;
}
