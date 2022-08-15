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
typedef unsigned long long usll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vll> vvl;

typedef vector<string> vs;
#define rep(i, v) for (int i = 0; i < v.size(); ++i)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define M_PI 3.14159265358979323846
ll n, t, c;
string S;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

// compute sum of vector

usll factorial(usll n)
{
    if (n == 0)
        return 1;
    c = n;
    for (int i = n - 1; i > 1; i--)
        c *= i;
    return c;
}

bool sortbyCond(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return a.second > b.second;
}

bool sortStrPair(pair<string, pair<ll, ll>> &a, pair<string, pair<ll, ll>> &b)
{
    if (a.second.first != b.second.first)
        return (a.second.first < b.second.first);
    else
        return a.second.second > b.second.second;
}

bool sortChar(pair<char, ll> &a, pair<char, ll> &b)
{
    if (a.second != b.second)
        return (a.second > b.second);
    else
        return a.first > b.first;
}

bool primeTest(ll n)
{

    bool flag = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n <= 1)
        flag = false;
    if (flag == 1)
        return true;
    return false;
}

ll nearestPrimeNumber(ll n)
{
    if (n & 1)
        n -= 2;
    else
        n--;
    int i, j;
    for (i = n; i >= 2; i -= 2)
    {
        if (i % 2 == 0)
            continue;
        for (j = 3; j * j <= i; j += 2)
        {
            if (i % j == 0)
                break;
        }
        if (j * j > i)
            return i;
    }
    return 2;
}

void adjacnetList(vector<vector<pair<int, int>>> adjList)
{
    for (int i = 0; i < adjList.size(); ++i)
    {
        cout << "Node " << i + 1 << " -->";
        for (int j = 0; j < adjList[i].size(); ++j)
        {
            cout << "{ " << adjList[i][j].first << " , " << adjList[i][j].second << " }";
        }
        cout << '\n';
    }
}

vector<bool> isVisited(10000001, false);
vector<ll> cated(1000001);

void dfs(vector<vector<int>> &graph, int node)
{
    cout << node << '\n';
    isVisited[node] = true;
    for (auto child : graph[node])
    {
        if (!isVisited[child])
            dfs(graph, child);
    }
}

void bfs(vector<vector<int>> graph, int node)
{
    queue<int> nextToVisit;
    nextToVisit.push(node);
    while (!nextToVisit.empty())
    {
        int current = nextToVisit.front();
        isVisited[current] = true;
        nextToVisit.pop();
        cout << current << '\n';
        for (auto child : graph[current])
        {
            if (!isVisited[child])
            {
                isVisited[child] = true;
                nextToVisit.push(child);
            }
        }
    }
}

int ans = 0, m;

void dfsSolve(vector<vector<ll>> &graph, ll node, ll cnt)
{
    //    cout<<"CNT:"<<cnt<<" Node:"<<node<<'\n';
    if (cnt > m)
        return;
    isVisited[node] = true;
    bool flag = false;
    for (auto child : graph[node])
    {
        if (!isVisited[child])
        {
            flag = true;
            isVisited[child] = 1;
            if (cated[child])
            {
                dfsSolve(graph, child, cnt + 1);
            }
            else
                dfsSolve(graph, child, 0);
        }
    }
    if (!flag)
        ans++;
}

void solve()
{
    ll m, x;
    cin >> n >> m;
    vll students(n);
    vll candies(m);
    map<ll, ll> mpStu;
    map<ll, ll> mpCandy;
    ll mxStu = LONG_LONG_MIN, mxCandy = LONG_LONG_MIN;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        mpStu[x]++;
        mxStu = max(mxStu, x);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> x;
        mpCandy[x]++;
        mxCandy = max(mxCandy, x);
    }

    bool done = true;
    m = 0;
    for (int i = 0; i <= mxStu; ++i)
    {
        bool flag = false;
        if (!mpStu[i])
            continue;
        // 5 5
        // 2 2
        while (m <= mxCandy)
        {
            if (mpStu[i] <= mpCandy[m])
            {
                flag = true;
                break;
            }
            m++;
        }
        m++;
        if (!flag)
        {
            done = false;
            break;
        }
    }
    if (done)
        cout << "YES";
    else
        cout << "NO";
    cout << '\n';
}

int main()
{
    fast;
    t = 1;
    cin >> t;
    while (t--)
        solve();
    //    int n; //n==> # of  nodes , m= # of edges
    //    cin >> n >> m;
    //    vector<vector<ll>> adj(n + 1);
    //    for (int i = 1; i <= n; ++i)
    //        cin >> cated[i];
    //
    //    for (int i = 0; i < n - 1; ++i) {
    //        int u, v, w;
    //        cin >> u >> v;
    ////        adjList[u].push_back({v, w});
    //        adj[u].push_back(v);
    //        adj[v].push_back(u);
    //    }
    //    dfsSolve(adj, 1, cated[1]);
    //    cout << ans;
}
