#include <bits/stdc++.h>
using namespace std;

std::vector<int> v;


template <class T> using V = vector<T>;
#define all(x) begin(x), end(x)

template <class T> void ckmin(T &a, const T &b) { a = min(a, b); }
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
 
 
/*vector<Mint> fact(1, 1);
vector<Mint> inv_fact(1, 1);
 
Mint C(int n, int k) {
  if (k < 0 || k > n) {
    return 0;
  }
  while ((int) fact.size() < n + 1) {
    fact.push_back(fact.back() * (int) fact.size());
    inv_fact.push_back(1 / fact.back());
  }
  return fact[n] * inv_fact[k] * inv_fact[n - k];
}*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	 read(N);
	V<int> A(N);
	for (int &x : A) read(x);
	V<V<int>> dp(N, V<int>(N));
	for (int i = N - 1; i >= 0; --i) {
		dp.at(i).at(i) = A.at(i);
		for (int j = i + 1; j < N; ++j) {
			dp[i][j] = INT_MAX;
			for (int k = i; k < j; ++k) {
				ckmin(dp.at(i).at(j),
					  max(dp.at(i).at(k), dp.at(k + 1).at(j)) + 1);
			}
		}
	}
	
	int64_t ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i; j < N; ++j) {
			ans += dp.at(i).at(j);
		}
	}
	cout << ans << "\n";
}