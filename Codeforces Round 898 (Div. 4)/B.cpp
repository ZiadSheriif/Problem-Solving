#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#include <string.h>

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
const ll MOD = 1e19 + 4;

typedef vector<string> vs;

#define rep(i, v) for (int i = 0; i < v.size(); ++i)
#define print(x) cout << x << endl
#define printV(v) for(int i=0;i<v.size();++i)cout<<v[i]<<" ";
#define readV(v) for(int i=0;i<v.size();++i)cin>>v[i];
#define en cout<<'\n';
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define OOLL LLONG_MAX
#define OO   INT_MAX
#define M_PI 3.14159265358979323846
ll n, t, c;
string S;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// compute sum of vector

usll factorial(usll n) {
    if (n == 0)
        return 1;
    c = n;
    for (int i = n - 1; i > 1; i--)
        c *= i;
    return c;
}

bool cmp(pair<ll, ll> &a,
         pair<ll, ll> &b) {
    return a.second > b.second;
}

bool sortByCond(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return a.second > b.second;
}

bool sortStrPair(pair<string, pair<ll, ll>> &a, pair<string, pair<ll, ll>> &b) {
    if (a.second.first != b.second.first)
        return (a.second.first < b.second.first);
    else
        return a.second.second > b.second.second;
}

bool sortChar(pair<char, ll> &a, pair<char, ll> &b) {
    if (a.second != b.second)
        return (a.second > b.second);
    else
        return a.first > b.first;
}

bool newSort(pair<ll, string> &a, pair<ll, string> &b) {
    if (a.second != b.second)
        return (a.second > b.second);
    else
        return a.first > b.first;
//    if (a.first != b.first)
//        return (a.first < b.first);
//    else
//        return a.second > b.second;
}

bool primeTest(ll n) {

    bool flag = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
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

ll nearestPrimeNumber(ll n) {
    if (n & 1)
        n -= 2;
    else
        n--;
    int i, j;
    for (i = n; i >= 2; i -= 2) {
        if (i % 2 == 0)
            continue;
        for (j = 3; j * j <= i; j += 2) {
            if (i % j == 0)
                break;
        }
        if (j * j > i)
            return i;
    }
    return 2;
}

void adjacentList(vector<vector<pair<int, int>>> adjList) {
    for (int i = 0; i < adjList.size(); ++i) {
        cout << "Node " << i + 1 << " -->";
        for (int j = 0; j < adjList[i].size(); ++j) {
            cout << "{ " << adjList[i][j].first << " , " << adjList[i][j].second << " }";
        }
        cout << '\n';
    }
}

vector<bool> isVisited(10000001, false);
vector<ll> cated(1000001);

void dfs(vector<vector<int>> &graph, int node) {
    cout << node << '\n';
    isVisited[node] = true;
    for (auto child: graph[node]) {
        if (!isVisited[child])
            dfs(graph, child);
    }
}

void bfs(vector<vector<int>> graph, int node) {
    queue<int> nextToVisit;
    nextToVisit.push(node);
    while (!nextToVisit.empty()) {
        int current = nextToVisit.front();
        isVisited[current] = true;
        nextToVisit.pop();
        cout << current << '\n';
        for (auto child: graph[current]) {
            if (!isVisited[child]) {
                isVisited[child] = true;
                nextToVisit.push(child);
            }
        }
    }
}

void dijk(int source, vector<vector<pair<int, int>>> &graph) {

    int n = graph.size();
    vector<int> dist(n, OO), pre(n, -1);
    // cost, node
    priority_queue<pair<int, int>> nextToVisit;


    dist[source] = 0;
    pre[source] = source;
    nextToVisit.push({0, source});


    while (!nextToVisit.empty()) {
        int u = nextToVisit.top().second;
        nextToVisit.pop();
        if (isVisited[u])
            continue;
        isVisited[u] = true;
        for (auto e: graph[u]) {
            int v = e.first;
            int c = e.second;
            if (dist[u] + c < dist[v]) {
                dist[v] = dist[u] + c;
                pre[v] = u;
                nextToVisit.push({-dist[v], v});
            }
        }
    }
    for (int i = 1; i < n; ++i) {
        cout << i << ": " << dist[i] << ": " << pre[i] << "\n";
    }

}


int ans = 0, m;

void dfsSolve(vector<vector<ll>> &graph, ll node, ll cnt) {
    //    cout<<"CNT:"<<cnt<<" Node:"<<node<<'\n';
    if (cnt > m)
        return;
    isVisited[node] = true;
    bool flag = false;
    for (auto child: graph[node]) {
        if (!isVisited[child]) {
            flag = true;
            isVisited[child] = 1;
            if (cated[child]) {
                dfsSolve(graph, child, cnt + 1);
            } else
                dfsSolve(graph, child, 0);
        }
    }
    if (!flag)
        ans++;
}

string toLowerCase(string S) {
    // get unique of char in order
    //    S.erase(unique(S.begin(), S.end()), S.end());
    transform(S.begin(), S.end(), S.begin(), [](char c) {
        return tolower(c);
    });
}

ll fasPow(ll b, ll p) {
    if (b == 1 || p == 0) {
        return 1;
    }
    ll hp = fasPow(b, p / 2);
    ll res = (hp % MOD * hp % MOD) % MOD;
    if (p & 1) {
        res = (res * b) % MOD;
    }
    return res;
}

void solve() {
    cin >> n;
    ll x, res = 1, mn = LLONG_MAX;
    bool ok = true;
    while (n--) {
        cin >> x;
        mn = min(mn, x);
        if (x == 0 && ok) {
            ok = false;
            continue;
        }
        res *= x;

    }
    if (mn != 0) {
        res /= mn;
        res *= (mn + 1);
    }
    cout << res;
    en


}

int main() {
    fast;
    //    freopen("task.in","r",stdin);
    t = 1;
    cin >> t;
    while (t--)
        solve();


    //    int n; //n==> # of  nodes , m= # of edges
    //    cin >> n >> m;
    //    vector<vector<int>> adj(n + 1);
    //    for (int i = 1; i <= n; ++i)
    //        cin >> cated[i];
    //

    //    4 5
    //    1 2 6
    //    1 3 2
    //    3 4 5
    //    3 2 3
    //    2 4 1
    //    for (int i = 0; i < n; ++i) {
    //        int u, v, c, k;
    //        cin >> k;
    //        while (k--) {
    //            cin >> c;
    ////            adj[u].push_back({i, c}); // directed graph
    ////            adj[i].push_back(c); // undirected graph
    ////            adj[c].push_back(i);  // undirected graph
    //        }
    //
    //    }
    //    dijk(1, adj);
    //    dfsSolve(adj, 1, cated[1]);
    //    cout << ans;
    //    dfs(adj, 0);
    return 0;
}
