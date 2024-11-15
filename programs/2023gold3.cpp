#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> e;
    void init(int N) { e = vector<int>(N, -1); }
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
    void unite(int x, int y) {  // min(x,y) now points to max(x,y)
        x = get(x), y = get(y);
        if (x == y) return;
        if (x > y) swap(x, y);
        e[x] = y;
    }
};

void dfs1(vector<vector<int>> &with_depth, const vector<vector<int>> &child,
          int x, int d) {
    with_depth[d].push_back(x);
    for (int c : child.at(x)) dfs1(with_depth, child, c, d + 1);
}

void solve() {
    int N;
    cin >> N;
    DSU D;
    D.init(N + 1);
    vector<int> par1(N + 1);
    vector<vector<int>> child1(N + 1);
    for (int i = 1; i < N; ++i) {
        int v, p;
        cin >> v >> p;
        par1[v] = p;
        child1[p].push_back(v);
    }
    int root = 1;
    while (par1[root]) ++root;
    vector<vector<int>> with_depth(N);
    dfs1(with_depth, child1, root, 0);
    int M;
    cin >> M;
    for (int i = 1; i < M; ++i) {
        int v, p;
        cin >> v >> p;
        D.unite(p, par1[v]);  // type 1
    }
    for (int d = N - 1; d >= 0; --d)  // type 2
        for (int x : with_depth[d]) D.unite(par1[x], par1[D.get(x)]);
    cout << N - M << "\n";
    for (int d = 1; d < N; ++d) {
        for (int x : with_depth[d])
            if (D.get(x) != x) cout << x << " " << D.get(x) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) solve();
}
