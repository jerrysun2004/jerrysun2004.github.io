#include <bits/stdc++.h>
using namespace std;
template <typename T>
inline void read(T &f) {
    f = 0; T fu = 1; char c = getchar();
    while (c < '0' || c > '9') { if (c == '-') { fu = -1; } c = getchar(); }
    while (c >= '0' && c <= '9') { f = (f << 3) + (f << 1) + (c & 15); c = getchar(); }
    f *= fu;
}
 
template <typename T>
void print(T x) {
    if (x < 0) putchar('-'), x = -x;
    if (x < 10) putchar(x + 48);
    else print(x / 10), putchar(x % 10 + 48);
}
 
template <typename T>
void print(T x, char t) {
    print(x); putchar(t);
}
struct DSU {
	vector<int> e;
	void init(int N) { e = vector<int>(N, -1); }
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
	bool unite(int x, int y) {
		x = get(x), y = get(y);
		if (x == y) return 0;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y];
		e[y] = x;
		return 1;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	read(N);
	vector<tuple<int, int, int>> edges;
	for (int i = 1; i <= N; ++i) {
		int a, v;
		read(a); read(v);
		edges.push_back({v, i, a});
	}

	sort(edges.rbegin(), edges.rend());
	DSU D;
	D.init(N + 1);
	int64_t ans = 0;
	for (auto [v, x, y] : edges)
		if (D.unite(x, y)) ans += v;
	cout << ans << "\n";
}