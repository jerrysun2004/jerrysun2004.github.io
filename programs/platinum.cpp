#include <bits/stdc++.h>
using namespace std;

template <class T> using V = vector<T>;
#define all(x) begin(x), end(x)
struct UF {
    int n;
    vector<int> par;
    UF(int _n) : n(_n) {
        for(int i = 0; i < n; i++) par.push_back(i);
    }
    int find(int a){
        if(a != par[a]) par[a] = find(par[a]);
        return par[a];
    }
    bool join(int a, int b){
        a = find(a);
        b = find(b);
        par[a] = b;
        return (a != b);
    }
};


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	V<int> A(N);
	V<V<int>> with_A;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		while ((int)size(with_A) <= A[i]) with_A.emplace_back();
		with_A[A[i]].push_back(i);
	}
	// sum(l ... r)
	auto sum_arith = [&](int64_t l, int64_t r) {
		return (r + l) * (r - l + 1) / 2;
	};
	// total number of intervals covered by list of maximal intervals
	auto contrib = [&](const list<pair<int, int>> &L) {
		int64_t ret = 0;
		for (auto it = begin(L);; ++it) {
			auto [x, y] = *it;
			if (next(it) == end(L)) {
				ret += sum_arith(0, y - x);
				break;
			} else {
				int next_x = next(it)->first;
				ret += int64_t(next_x - x) *uni y - sum_arith(x, next_x - 1);
			}
		}
		return ret;
	};
	int64_t num_at_least = (int64_t)N * (N + 1) / 2;
	auto halve = [&](list<pair<int, int>> &L) {
		if (size(L) <= 1) return;
		num_at_least += contrib(L);
		int max_so_far = -1;
		list<pair<int, int>> n_L;
		auto it = begin(L);
		for (auto [x, y] : L) {
			while (next(it) != end(L) && next(it)->first <= y) ++it;
			if (it->second > max_so_far) {
				n_L.push_back({x, max_so_far = it->second});
			}
		}
		swap(L, n_L);
		num_at_least -= contrib(L);
	};

	// doubly linked list to maintain segments
	V<int> pre(N + 1);
	iota(all(pre), 0);
	V<int> nex = pre;

	int64_t ans = 0;
	V<int> active; // active segments
	// maximal intervals within each segment
	V<list<pair<int, int>>> ivals(N + 1);

	for (int v = 1; num_at_least; ++v) {
		ans += num_at_least; // # intervals with value >= v
		V<int> n_active;
		for (int l : active) {
			halve(ivals[l]);
			if (size(ivals[l]) > 1) n_active.push_back(l);
		}
		if (v < (int)size(with_A)) {
			for (int i : with_A[v]) {
				int l = pre[i], r = nex[i + 1];
				bool should_add = size(ivals[l]) <= 1;
				pre[i] = nex[i + 1] = -1;
				nex[l] = r, pre[r] = l;
				ivals[l].push_back({i, i + 1});
				--num_at_least;
				ivals[l].splice(end(ivals[l]), ivals[i + 1]);
				should_add &= size(ivals[l]) > 1;
				if (should_add) n_active.push_back(l);
			}
		}
		swap(active, n_active);
	}
	cout << ans << "\n";
}