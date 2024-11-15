#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main(){


	for (int i=0; i<10; i++){
		vector<vector<int> > edges(2);
		edges[0].push_back(1);
		edges[1].push_back(0);
		cout << edges[0].size() << endl;

	}

	int dx[4]={3,1,2,4};
	for (int i=0; i<4; i++)
		cout << dx[i] << endl; 
	stack<int> si;
	si.push(1);
	si.push(2);
	cout << si.top() << endl;
	si.pop();
	cout << si.top << " " << si.size() << endl;
	

}