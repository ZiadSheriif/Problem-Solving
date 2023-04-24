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
#define INFLL LLONG_MAX
#define INF INT_MAX
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

bool cmp(pair<ll, ll> &a,
         pair<ll, ll> &b)
{
    return a.second > b.second;
}

bool sortByCond(const pair<ll, ll> &a, const pair<ll, ll> &b)
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

void adjacentList(vector<vector<pair<int, int>>> adjList)
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

void dijk(int source, vector<vector<pair<int, int>>> &graph)
{

    int n = graph.size();
    vector<int> dist(n, INF), pre(n, -1);
    // cost, node
    priority_queue<pair<int, int>> nextToVisit;

    dist[source] = 0;
    pre[source] = source;
    nextToVisit.push({0, source});

    while (!nextToVisit.empty())
    {
        int u = nextToVisit.top().second;
        nextToVisit.pop();
        if (isVisited[u])
            continue;
        isVisited[u] = true;
        for (auto e : graph[u])
        {
            int v = e.first;
            int c = e.second;
            if (dist[u] + c < dist[v])
            {
                dist[v] = dist[u] + c;
                pre[v] = u;
                nextToVisit.push({-dist[v], v});
            }
        }
    }
    for (int i = 1; i < n; ++i)
    {
        cout << i << ": " << dist[i] << ": " << pre[i] << "\n";
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

string toLowerCase(string S)
{
    // get unique of char in order
    //    S.erase(unique(S.begin(), S.end()), S.end());
    transform(S.begin(), S.end(), S.begin(), [](char c)
              { return tolower(c); });
}

void solve()
{
    ll k;
    cin >> n >> k >> S;
    map<char, ll> mp;
    for (char &x : S)
        mp[x]++;

    ll cnt = 0;
    for (auto &x : mp)
    {
        if ((x.second == 1 && mp[x.first + ' '] == 0) || (x.second == 1 && mp[x.first - ' '] == 0 && x.first >= 'a'))
            mp.erase(mp[x.first]);

        else
        {
            ll mn = min(x.second, mp[x.first + 32]);
            cnt += mn;
            mp[x.first] -= mn;
            mp[x.first + 32] -= mn;
            if (mp[x.first] == 0)
                mp.erase(mp[x.first]);
            if (mp[x.first + ' '] == 0)
                mp.erase(mp[x.first + ' ']);
        }
    }

    for (auto &x : mp)
    {
        if (k > 0)
        {
            if ((x.second / 2) <= k)
            {
                k -= x.second / 2;
                cnt += x.second / 2;
            }
            else
            {
                cnt += k;
                break;
            }
        }
    }
    cout << cnt << '\n';
}

int main()
{
    fast;
    //    freopen("task.in","r",stdin);
    t = 1;
    cin >> t;
    while (t--)
        solve();

    //    int n; //n==> # of  nodes , m= # of edges
    //    cin >> n >> m;
    //    vector<vector<pair<int, int>>> adj(n + 1);
    //    for (int i = 1; i <= n; ++i)
    //        cin >> cated[i];
    //

    //    4 5
    //    1 2 6
    //    1 3 2
    //    3 4 5
    //    3 2 3
    //    2 4 1
    //    for (int i = 0; i < m; ++i) {
    //        int u, v, c;
    //        cin >> u >> v >> c;
    //        adj[u].push_back({v, c}); // directed graph
    ////        adj[u].push_back(v); // undirected graph
    ////        adj[v].push_back(u);  // undirected graph
    //    }
    //    dijk(1, adj);
    //    dfsSolve(adj, 1, cated[1]);
    //    cout << ans;
    return 0;
}