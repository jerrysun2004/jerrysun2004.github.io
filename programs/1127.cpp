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
 
vector<int> vi;
//codeforce round 650 division 3 c
	/*vector<int> vi;
	int n; cin >> n; int k; cin >> k;
	for (int i=0; i<n; i++)
		 cin >> vi[i];
	for (int i=0; i<n; i++)
	{
		if (v[i]==1){
			ans+=counter/k;
			i+=k;
		}
		else{
			counter++;
		}
	}
	return counter;

	 int count = 10;
    int& countRef = count;
    auto myAuto = countRef;

    countRef = 11;
    cout << count << " ";

    myAuto = 12;
    cout << count << endl;*/
//learning vectors 
//push_back() is one function I know pretty well
//iterators like begin() crbegin() are commonplace for all c++ data structures

//size(), empty()
//once I learn try to remember, if I can't that could be bad
set<int> visited;
map<int,list<int> > edges;
map<int,int> mip;

//set
//insert and erase
//size and empty

void solve(){


}

//I know now that /t is for one space and /n is for a new line
//list getters are front and back
//list iterators are pretty much the same as other c++ data structures that use iterators
//empty, max_size and size

//very scary when you don't understand what is happening with programming, but always wanting to learn more is the first step to success

/*void dfs(int source, int dest, int[] edges){
	if (source==dest)
		return;
	visited.insert(source);
	while (!visited.empty()){
		while()
	}
}*/



int main( )
{
	mip[19]=22;
	mip[32]=52;
	mip[323]=32;
	map<int,int>::iterator i;
	for (i=mip.begin(); i!=mip.end(); i++){
		cout << i->first << "\t" << i->second << endl;
	}

	visited.insert(1);
	visited.insert(2);

	list<int> li={1,2,3,4,5};
	list<int>::iterator j;

	for (j=li.begin(); j!=li.end(); j++){
		cout << *j << endl; 
	}

	edges[1]={1,2,3};
	edges[2]={1,4,5};

	for (map<int,list<int>>::iterator i=edges.begin(); i!= edges.end(); i++){
		cout << i->first << endl;
		list<int>::iterator k;
		cout << "\n" << endl; 
		for (k=i->second.begin(); k!=i->second.end(); k++){
			cout << *k << endl;
		}
	}//set size(),empty(),max_size(),
	//modifiers erase,insert
	//key,order of

	cout << *visited.begin() << endl;

	while (!visited.empty()){
		cout << *visited.begin() << endl;
		visited.erase(visited.begin());
	}

	cout << *visited.begin() << endl; 
   
  	

}
