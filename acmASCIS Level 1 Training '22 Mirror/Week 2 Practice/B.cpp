#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <map>
#include <set>
#include <limits.h>
#include <iomanip>

using namespace std;

#include <string>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<string> vs;
#define rep(i, v) for (int i = 0; i < v.size(); ++i)

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define M_PI 3.14159265358979323846
ll n, x, y, a, b, c, d, s, r, k, w, m;
double o, t;
string ss;
bool test = false;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void merge(long long *Arr, int m, int l, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    long long *arr1 = new long long[n1], *arr2 = new long long[n2];
    for (int i = 0; i < n1; i++)
        arr1[i] = Arr[i + l];
    for (int i = 0; i < n2; i++)
        arr2[i] = Arr[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            Arr[k] = arr1[i];
            i++;
        }
        else
        {
            Arr[k] = arr2[j];
            j++;
            // C += (m - l - i + 1);
        }
        k++;
    }

    while (i < n1)
    {
        Arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        Arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergeSort(long long *arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, m, l, r);
    }
}
long long BoklozandNumbers(long long *vec, int n)
{
    mergeSort(vec, 0, n - 1);
    return vec[n - 1];
}

int main()
{
    fast;
    cin >> n;
    ll *v = new ll[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << BoklozandNumbers(v, n);
}