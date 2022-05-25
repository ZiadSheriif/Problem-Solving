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
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define M_PI 3.14159265358979323846
int main()
{
  cin >> a >> b >> c;
  cout << fixed << setprecision(6) << ((2 * a) + (3 * b)) * (5 * c);
  return 0;
}