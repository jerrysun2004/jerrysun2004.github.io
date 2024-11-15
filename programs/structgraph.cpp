#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class graph{
	int size;
	vector<int> *adj;
	//not sure if this is the right construction but I have to try, look up the answer later on geeks for geeks
public:
	graph(int size);
	void addedges(int i,int j);
	void printsol();

};
      graph::graph(int size){
		this->size=size;
		adj=new vector<int> (size);
	}
	void graph::addedges(int i,int j){
		adj[i].push_back(j);
		adj[j].push_back(i);
	}
	void graph::printsol(){
		for (int i=0; i<size; i++){
			for (int j=0; j<2; j++)
				cout << adj[i][j] << endl;
		}
	}
	
	


int main(){
	vector<int>* adj=new vector<int >;
	adj[2].push_back(3);
	adj[3].push_back(4);
	cout << adj[31].size() << endl;
	cout << adj[2].size() << endl;
	cout << adj[3].size() << endl;
	
	
	graph g(10);
	g.addedges(2,3);
	
}