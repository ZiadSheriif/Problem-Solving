#include <iostream>
using namespace std;
int max(int l1, int l2);
int min(int r1, int r2);
int main()
{
    int l1, l2, r1, r2;
    cin >> l1 >> r1;
    cin >> l2 >> r2;
    if (l2 > r1 || l1 > r2)
        cout << -1 << endl;
    else
        cout << max(l1, l2) << " " << min(r1, r2) << endl;
}
int max(int l1, int l2)

{

    int max;
    if (l1 >= l2)
        max = l1;
    else
        max = l2;

    return max;
}
int min(int r1, int r2)
{
    int min;
    if (r1 >= r2)
        min = r2;
    else
        min = r1;

    return min;
}
