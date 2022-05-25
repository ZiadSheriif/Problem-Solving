#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long long arr[3], i;
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    cout << arr[0] << " " << arr[2] << endl;
}
