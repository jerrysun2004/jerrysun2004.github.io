#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

map<int,vector<int> > edges;
bool visited[13];
//the parameters of my function might change depending on what I am doing
void dfs(int start){
	//if already visited a if statement I have done thousands of times already, but I have do it again
	//dfs might be working My test cases are shit though
	if (visited[start])
		return;
	visited[start]=true;
	cout << start << endl;
	//difference between using auto&i and int i?? probably the same result because visited[i] is called
	for (int i: edges[start]){
		dfs(i);
	}
}
void bfs(int start){
	queue<int> qi;
	qi.push(start);
	visited[start]=true;
	while (!qi.empty()){
			int a=qi.front(); qi.pop();
			visited[a]=true;
			for (int i:edges[a])
			{
				if (!visited[i])
				qi.push(i);
			}
			cout << a << endl;
	}
}
//the two pointer method was interesting how does it work? It must only work for certain types of graphs
//functional graphs? Otherwise how do a[i] and a[a[i]] always find the right cycle?

//what data structures to use for dijkstra is kind of tough
//I don't think the coding is the problem, it is just the ds that I just don't want think about
//remember this is a chronic issue but any sort of progress is progress
map<pair<int,int>,int> dist;
map<int,int> edges;
int dijkstra(int start,int destination){
	map<int,bool> visited;
	queue<int> ord;
	ord.push(start);
	while (!ord.empty()){
		int a=ord.front(); ord.pop();
		visited[a]=true;
		for (auto& i: edges[a]){
			if (!visited[i])
				ord.push(i);
		if (dist[make_pair{start,a}]>dist[make_pair{start,i}]+dist[make_pair{i,a}]){
			dist[make_pair{start,a}]=dist[make_pair{start,i}]+dist[make_pair{i,a}];
		}
		}
	}

}

int main(){

	//okay got the data structure working
	//now what do I want to do?
	//1-2-3-4-5-6-7-8
	//2-9-10-11-12

	edges[0]={1};
	edges[1]={0,2};
	edges[2]={1,3,9};
	edges[3]={4,2};
	edges[4]={3,5};
	edges[5]={4,6};
	edges[6]={5,7};
	edges[7]={6,8};
	edges[8]={7};
	edges[9]={2,10};
	edges[10]={9,11};
	edges[11]={10,12};
	edges[12]={11};

	map<int,vector<int>>::iterator i;
	for (i=edges.begin(); i!=edges.end(); i++)
	{
		cout << i->first << endl;
		for (int j=0; j<i->second.size(); j++)
			cout << i->second.at(j) << endl;
		cout << endl;
	}
	//dfs(0);
	bfs(0);
}