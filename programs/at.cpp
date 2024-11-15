
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<vector<int> > edges;
map<int,bool> visited;
int dfs (int x){
	visited[x]=true;
	return 0;
}
int main(){
	vector<int> vi;
	for (int i=0; i<10; i++){
		vi.push_back(i);
	}
	for (int i=0; i<10; i++){
		vi.at(i)++;
	}
	for (int i=0; i<10; i++){

		cout << vi[i] << endl; 
	}
	visited[0]=true;

	visited[1]=false;
	visited[2]=true;
	map<int,bool>::iterator i;
	for (i=visited.begin(); i!=visited.end(); i++){
		cout << i->first << " " << i->second << endl; 
	}

	return 0;
}