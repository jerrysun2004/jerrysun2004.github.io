#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// a graph with cycles possibly?
// test case gives an interesting version
// if there is  a cycle then it is all the biggest moos minus the minimum
//even after loooking at the solution I am still unsure of what to do
bool visited[10];
int component[10];
//number of connected componentes
// 1-2-3 4-5-6-78 9 
vector<vector<int>> edges(10);
int componentdfs(int x,int counter){
	if (visited[x])
		return 0;
	component[x]=counter;
	visited[x]=true;
	int sum=x;
	for (auto& i: edges[x]){
		sum+=componentdfs(i,counter);
	}
	return sum;

}

struct graph{
	int size;
	vector<vector<int> > *adj;
	//not sure if this is the right construction but I have to try, look up the answer later on geeks for geeks
	 graph(int size){
		this->size=size;
		adj=new vector<vector<int>> (size);
	}
	void graph::addedges(int i,int j){
		adj[i].push_back(j);
		adj[j].push_back(i);
	void printsol(){
		for (auto& i: adj){
			cout << i << endl;
		}
	}
	}
};
int main(){
	graph g(10);
	g.addedges(2, 3);
	g.printsol();
	pair<int,int> pi;
	pi=make_pair(2,3);
	cout << pi.first << " " << pi.second << endl;
	int c=0;
	edges[0].push_back(1);
	edges[1].push_back(2);
	edges[2].push_back(3);
	edges[3].push_back(0);
	edges[4].push_back(5);
	edges[5].push_back(6);
	edges[6].push_back(7);
	edges[6].push_back(8);
	

	for (int i=0; i<10; i++){
		if (component[i]==0){
			int a=componentdfs(i,++c);
			cout << " component"<< " "<< c << " sum is "<< a << endl;
		}
	}
	for (int i=0; i<10; i++){
		cout << component[i] << endl;
	}
	return 0;
}