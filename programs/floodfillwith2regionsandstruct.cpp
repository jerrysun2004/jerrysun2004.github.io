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

int n;
 int global_id;
 int b[1001][1001];
int cellid[1001][1001];

struct Graph{
	map<int,set<int> > out_edges;
	map<int,int> nodesize,regsize;
	map<int,int> regid;
};


map<int,Graph> graph1;
map<pair<int,int>,Graph> graph2;


int findregionsize(Graph &G, int nodeid, int regid){
	if (G.regid.count(nodeid)>0) return 0;
	G.regid[nodeid]=regid;
	int a=G.nodesize[nodeid];
	for (int nbrs: G.out_edges[nodeid])
		a+=findregionsize(G,nbrs,regid);
	G.regsize[regid]=a;
	return a;

}


int findmaxregion(Graph& G){
	int m = 0;
	for (auto& p: G.out_edges) m = max(m,findregionsize(G, p.first,++global_id));
	return m;
}


void addedge(Graph &G,int r1,int r2){
	G.out_edges[r1].insert(r2);
	G.out_edges[r2].insert(r1);
	G.nodesize[r1]=G.nodesize[r2] = 1;
}


void maketworegions(int j1,int j2, int i1, int i2){
	int b1=b[j1][j2]; int b2=b[i1][i2]; int c1=cellid[j1][j2]; int c2=cellid[i1][i2];
	if (b1>b2) {swap(b1,b2); swap(c1,c2);}
	pair<int,int> p = mp(b1,b2);
	int r1=graph1[b1].regid[c1]; int r2=graph1[b2].regid[c2];
	addedge(graph2[p],r1,r2);
	graph2[p].nodesize[r1]=graph1[r1].regsize[r1];
	graph2[p].nodesize[r2]=graph1[r1].regsize[r2];


}


int main(){


	ifstream fin ("multimoo.in");
	ofstream fout ("multimoo.out");


	cin >> n;




	for (int i=1; i<n; i++){
		for (int j=1; j<n; j++){
			cin >> b[i][j];
			cellid[i][j]=n*i+j;
			
			
		}


		for (int i = 0; i < n; ++i)
		{ for (int j = 0; i < n; ++i)
			{
				addedge(graph1[b[i][j]],cellid[i][j],cellid[i][j]);
				if (i<n && b[i][j+1]==b[i][j])
					addedge(graph1[b[i][j]],cellid[i][j],cellid[i][j+1]);
				if (j<n && b[i+1][j]==b[i][j])
					addedge(graph1[b[i][j]],cellid[i][j],cellid[i+1][j]);
			}
		}

		int ans=0;
		
		for (auto& p:graph1) ans=max(ans,(findmaxregion(p.second)));
		
		for (int i = 1; i < n; ++i)
		{ for (int j = 1; i < n; ++i)
			{
				if (i<n && b[i][j+1]==b[i][j])
					maketworegions(i,j+1,i,j);
				if (j<n && b[i+1][j]==b[i][j])
					maketworegions(i,j,i+1,j);
			}
		}

		int ans2=0;
		for (auto& p:graph2) ans=max(ans,(findmaxregion(p.second)));
   


   cout << ans << "\n";
   cout << ans2 << "\n";
    return 0;
}}