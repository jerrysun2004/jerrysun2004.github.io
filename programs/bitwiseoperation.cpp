#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//got a simple dfs, bfs and connected components done
//what else for graphs
//probably learn more about data structures
//union find

//every usaco has a graph problem so I have to prepared for that
//try to get better at piano, music, rediscover who I am
//ad hoc/ algorithm like problems 
// more data structure practice, I might not be studying in the right way so just keep that in mind

// don't give up too easily, I am getting closer to the right answer, just persevere
int findodd(int arr[],int x){
	int res=0;
	for (int i=0; i<x; i++){
		res^=arr[i];
	}
	return res;
}
const int MOD = 1e9+7;
using ll = long long;
struct mi {
 	int v; explicit operator int() const { return v; } 
	mi() { v = 0; }
	mi(ll _v):v(_v%MOD) { v += (v<0)*MOD; }
};
mi& operator+=(mi& a, mi b) { 
	if ((a.v += b.v) >= MOD) a.v -= MOD; 
	return a; }
mi& operator-=(mi& a, mi b) { 
	if ((a.v -= b.v) < 0) a.v += MOD; 
	return a; }
mi operator+(mi a, mi b) { return a += b; }
mi operator-(mi a, mi b) { return a -= b; }
mi operator*(mi a, mi b) { return mi((ll)a.v*b.v); }
mi& operator*=(mi& a, mi b) { return a = a*b; }


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

	
	int func(int a)
	const {
		return a;
	}
	


int main (){
	int a=5;
	int b=9;
	//need parenthesis
	cout << (a^b) << endl; 
	cout << (a <<3) << endl;
	cout << (b>>1) << endl;
	cout << (~a) << endl;
	cout << (a&&~a) << endl;
	cout << endl;
	int arr[]={12,12,14,14,15,15,13};
	//this size thing is kind of annoying
	int n=sizeof(arr)/sizeof(arr[0]);
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << "the odd element has index" << " " << findodd(arr,n) << endl;
	mi c=mi(2);
	mi d=mi(3);
	c=c+d+d;
	cout << "this is c" << c.v << endl;
	cout << d.v << endl;
	UF hello=UF(22);
	cout << hello.find(7) << endl;
	hello.join(3,12);
	cout << hello.find(12) << endl;
	cout << hello.find(3) << endl;
	hello.join(3,1);
	cout << hello.find(1) << endl;
	vector<int> vi;
	cout << vi.max_size() << endl;
	cout << func(2) << endl;
	return 0;
}