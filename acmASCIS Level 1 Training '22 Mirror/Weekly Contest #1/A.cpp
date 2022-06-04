#include "draft.h"
void ClimbingForever()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans = n * (n + 1) / 2;
    long long x = n / a;
    ans -= a * (x * (x + 1) / 2);
    ans += b * x + (x * (x - 1) / 2);
    cout << ans;
}

int main()
{
    fast;
    ClimbingForever();
    return 0;
}