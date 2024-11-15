#include <algorithm>
#include <iostream>

using namespace std;
const int MAX_N =10000000001;

void func(int x){
	visited[x]=true;
	for (auto & i: adj[x]){
		func(i);
	}

}



int main(){

	int n; cin >> n;
	for (int i=0; i<n; i++){
	 p[n];
		cin >> p[i].first >> p[i].second;
	}

}