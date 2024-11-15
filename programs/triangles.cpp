#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

bool visited[10];
int dist[10];
vector<vector<int> > edges(10);

void dfsdist(int source,int dis){

	dist[source]=dis;
	for (auto i:edges[source])
		dfsdist(i,dis+1);

}

int main(){
    edges[0].push_back(1);
    edges[0].push_back(2);
    edges[0].push_back(3);
    edges[2].push_back(4);
    edges[1].push_back(5);
    edges[5].push_back(6);
    edges[6].push_back(7);
    edges[7].push_back(8);
    edges[8].push_back(9);
    dfsdist(0,0);
    for (int i=0; i<10; i++)
    	cout << dist[i] << endl;
   
    return 0;
}