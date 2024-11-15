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


void solve(){
    int x;
    cin >> x;
    for (int i=0; i<32; i++)
        cout << i << endl;
}

//cow poetry attmept will see how this goes
//going to need an exponetiation function


int exponent(int x, int r){
    if (r==1)
        return x;
    return x*exponent(x,r-1);
}
int main(){
    /*fast_cin();
    ll t;
    int n=16;
    int n,m,k;
    cin >> n >> m >> k;
    for (int i=0; i<n; i++){
        cin << << ;
    }
    for (int i=0; i<m; i++)
        cin << rhyme[i];
    int dp[n][k];
    for (int i=0; i<n; i++)
        for (int m=0; m<k; m++)
            dp[i[]]
    for (int i=0; i<n; i++){
        if (i!=0)
        cout << endl;
        for (int m=0; m< n+1; m++)
            cout << "*";
    }*/
    int n=16;
    for (int i=0; i<n; i++)
         cout << i << endl;

    return 0;
}
