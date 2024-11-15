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
#include <tuple>
 
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
 
struct hello{
	int a,b;
	vector<int> vi;
};

//what type of data structures will last forever?
//how to change my mentality?
//how to actually learn to start to code?
// learning about templates and operater overloading which is good
//but seriously how do I start?
//the actual code during the USACO contest is going to be quite long and quite tough
//I should not expect it to be easy to come up with the solution and it should take me quite a long time to actually write the program
//but I should never feel like I do not know what I am doing which is what I am starting to feel right now.

vector<int> dfs(int x){
	vector<int> vi;
	vi.push_back(x);
	return vi;
}
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]\n";
    return os;
}

void dfs (int par=-1,int cur=12){
	cout << par << cur << endl;
}

vector<tuple<int,int,int> > vtuple;

int main(){
    vector<int> vi={{}};
  
    vector<int> vi2;
  	vi.resize(10);
  	vtuple.push_back({3,2,1});
  	for (auto [i,b,a]: vtuple){
  		cout << i << " " << b <<" " << a << endl;
  	}
  	int k=1;
  	for (int i=0; i<10; i++)
  		k=k<<1;
  	cout << k << endl;
  	cout << vi;
  	cout << vi2.size();
  	int vi3[]={1,2,3,4,5};
  	cout << max_element(vi3,vi3+4) << endl;
  /*  for (int i=0; i<100; i++){
    	cout << vi[i] << " "<< vi2[i] << endl;
    }
    cout << dfs(2) << endl;
    cout << dfs(3) << endl;
    vi2.push_back(3);
    cout << vi2 << endl;
*/
    hello* hola= new hello;
    hola->a=22;
    hola->b=23;
    hello bello;
    bello.a=22;
    bello.b=23;
    bello.vi={1,2,3,4,5};
    
    /*for (int i=0; i<sz(bello.vi); i++)
    	cout << bello.vi[i] << endl;
    vector<hello> bi;
    bi.push_back(bello);
    for (int i=0; i<bi.size(); i++)
    	cout << bi[i].a << endl;
    cout << sz(bi) << endl;
    cout << bello.a << endl;
    cout << hola->a << endl;*/
   
    return 0;
}