#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    long long minSum = LLONG_MAX;
    long long currentSum;
    for (int i = 0; i < k; i++)
    {
        currentSum = 0;
        for (int j = 0; j < n / k; j++)
            currentSum += vec[i + j * k];
        if (currentSum < minSum)
            minSum = currentSum;
    }
    cout << minSum;
    return 0;
}
