#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
#include <numeric>

using namespace std;



void dfs(const vector<vector<int> >& edges,vector<int>& componentid, int currv,int id){
	
	for (int i: edges[currv])
	{
		if (componentid[i]!=id){
			componentid[i]=id;
		
		dfs(edges,componentid, i,id);
	}
	}
}

void solve(){

	int n; int m;
		cin >> n >> m;
		vector<vector<int> > edges(n);
		vector<int> componentid(n);
	
		for (int i=0; i<m; i++){
			int a,b;
			cin >> a >> b;
			a--; b--;
			edges[a].push_back(b);
			edges[b].push_back(a);
		}
		for (int i=0; i<n; i++)
			componentid[i]=i;
	for (int i=0; i<n; i++){
		if (componentid[i]==i)
			dfs(edges,componentid,i,i);
	}


		vector<vector<int> > componenttovertices(n);
		
		if (componentid[0]==componentid[n-1]){
			cout << 0 << endl;
		return;
		}
		for (int i=0; i<n; i++){
			componenttovertices[componentid[i]].push_back(i);
		}

		vector<long long> sourcedist(n,1e9);
		//different between auto& and int
		int skip=0;
		for (int i=0; i<n; i++){
			while (i<conmponentvertices[componentid[0]].size()){
				sourcedist=min()
			}
		}
		vector<long long> destdist(n,1e9);
		for (int i: componenttovertices[componentid[n-1]]){
			for (int j=0; j<n; j++)
				destdist[componentid[j]]=min((long long)abs(i-j),destdist[componentid[j]]);
		}
		long long ans=1e18;
		for (int i=0; i<n; i++){
			ans=min(ans,sourcedist[i]*sourcedist[i]+destdist[i]*destdist[i]);
		}

		cout <<  ans << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		solve();
	}
	return 0;
}