#include <iostream>
typedef long long digit;
using namespace std;
#include <vector>
#include <iomanip>
#include <climits>
#include <stack>
#include <sstream>
#include <algorithm>
#include <queue>
#include <string>
#include <string.h>
#include <math.h>
const int Max = 26;
#define M_PI 3.14159265358979323846
long long n, x, y, a, b, c, d, s, r, k, w;
double m, o, t;
bool test = false;
string solve()
{
    cin >> r >> s;
    if (2 * r <= s)
        return "Square";
    else if (2 * r >= s * sqrt(2))
        return "Circle";
    else
        return "Complex";
}
int main()
{
    cout << solve();
}