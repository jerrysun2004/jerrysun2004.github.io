#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;


map<int, list<int> > edges;
map<pair<int,int>,int> distance;
bool[100] visited;

int dijkstra(int x,int end){
	queue<int> qi;
	qi.push_back(x);
	while(!qi.empty){
		int a=qi.front(); qi.pop();
		if (visited[a])
			continue;
		visited[a]=true;
		for (auto& i: edges[a]){
			if (dist[x][end]>dist[x][i]+dist[i][end])
				dist[x][end]=dist[x][i]+dist[i][end];

			qi.push(i);
		}

	}

	return dist[x][end];
}

int main(){
	

}