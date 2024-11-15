/* 2024-11-06T12:01:36.000
 Author: Jerry Sun */
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
 
vector<vector<int> > edges;
//vector<vector<int> , int> dist;
stack<int> si;
vector<bool> visited;
/*void solve(){
}*/
void bubblesort(int arr[],int length){
    for (int i=0; i< length; i++){
        for (int j=i+1; j<length; j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
}
void mergesort(int arr[], int length){
    if (length==1)
        return;
    int firstarr[length/2];
    int secondarr[length/2+length%2];
    for (int i=0; i<length/2; i++)
        firstarr[i]=arr[i];
    for (int i=length/2+length%2; i<length; i++)
        secondarr[i-(length/2+length%2)]=arr[i];
    mergesort(firstarr,length/2);
    mergesort(secondarr,(length/2+length%2));
    
}


int main(){
    fast_cin();
     auto start =chrono::high_resolution_clock::now();
    ll t;
   /* cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }*/
   int arr[10000];
   for (int i=0; i<10000; i++){
    arr[i]=1000-i;
    cout << arr[i] << " ";
   }
   cout << endl;
    bubblesort(arr,10000);
    for (int i=0; i<10000; i++){
        cout << arr[i] << " ";
    }
    si.push(1);
    si.push(2);
    for (int i=0; i<1000; i++)
    si.push(i);
    while (!si.empty())
    {
       //cout <<  si.top() << endl;
        si.pop();
    
    }
   
    int n;
   /* cin >> n;
     edges.resize(n);
     //dist.resize(n);
    for (int i=0; i<n; i++){
        int a, b,c;
        cin >> a >> b >> c;
        edges[a-1].push_back(b-1);
        edges[b-1].push_back(a-1);
        //dist[a-1][b-1]=c;
    }
    for (int i=0; i<edges.size(); i++){
        cout << endl;
        for (int j=0; j< edges[i].size(); j++){
            cout << edges[i][j] << " ";
        }
    }*/
    map<int,int> mi;
    mi[1]=12;
    mi[2]=32;
    mi[3]=43;
    map<int,int>::iterator hello=mi.begin();
    while( hello!= mi.end()){
        cout << hello->first << " " << hello->second << " " << &hello << endl;
        hello++;
    }
   
    auto end=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "Operation took " << duration.count() << " microseconds";
    
    cout << endl;
    int arr1=10;
    int *arr2=&arr1;
    cout << arr1 << " " << &arr1 << endl;
    cout << &arr2 << " " << arr2 << endl;

    return 0;
}