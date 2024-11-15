#include <bits/stdc++.h>
using namespace std;

template <class T> using V = vector<T>;
#define all(x) begin(x), end(x)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &x : A) cin >> x;
	assert(is_sorted(all(A)));
	// left endpoints of each partition interval in decreasing order
	deque<int> left_ends;
	int64_t ans = 0;
	for (int i = 0; i < N; ++i) {
		if (i) {
			for (int v = A[i - 1]; v < A[i]; ++v) {
				if (size(left_ends) == 1) break;
				// merge every two consecutive intervals in partition
				deque<int> n_left_ends;
				for (int j = 0; j < (int)size(left_ends); ++j) {
					if ((j & 1) || j + 1 == (int)size(left_ends)) {
						n_left_ends.push_back(left_ends[j]);
					}
				}
				swap(left_ends, n_left_ends);
			}
		}
		left_ends.push_front(i); // add [i,i] to partition
		int L = i + 1;
		for (int v = A[i]; L; ++v) {
			int next_L = left_ends.at(
			    min((int)size(left_ends) - 1, (1 << (v - A[i])) - 1));
			ans += (int64_t)(L - next_L) * v;
			L = next_L;
		}
	}
	cout << ans << "\n";
}
