#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

queue<int> qi;
int b[10];
int a[10];
stack<int> sti;
map <int,int> mi;

void dfs(int x){
	if (visited[x])
		return;
	cout << x << endl;
	for (auto& x: g[i])
		dfs(x);
}
int hello(){
	int a=0; 
	int b=0;
	map<int,int> mi;

	while (!q.empty())
	{
		qi.push(a[i]);
		i++;
		while (qi.front())
		{
			qi.pop();
		}
	}
}

void solve(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
		cin >> a[n];
	for (int i=0; i<n; i++){
			a[i]--;
			cout << a[i] << endl;
		}
	for (int i=0; i<n; i++)
		for (int j=i; j<n; j++)
				a[i]+=a[j]+max(i,j);

	
	}
vector<int> v1;

	void bfs(){
		v1.push_back(1);
		v1.push_back(2);


		queue<int> qi;
		while (!qi.empty()){
			int a=qi.front();qi.pop();
			for (auto& i: g[a]){
				qi.push(i);
			}
			ans+=a;
		}

	}

int insertionsort(int a[],int k){
	if (k==0 || k==1)
		return a;
	for (int i=1; i<k-1; i++){
		int j=i;
		while (a[j]>a[j-1]){
			j=j-1;
		}
		k=a[j];
		a[j]=a[i];
		a[i]=a[j];
	}
}


int fib(int x){
	int fibb[x];
	for (int i=0; i<x; i++)
		fibb[i]=0;
	if (x==0 || x==1)
		return 1;
	fibb[0]=1;
	fibb[1]=1;
	/*for (int i=2; i<x; i++){

		fibb[i]=fibb[i-1]+fibb[i-2];
		cout << fibb[i] << endl;
	}*/
	return fib(x-1)+fib(x-2);

	
}


int main(){
	std:: cout << "hello world" << endl;
	
	cout << fib(10) << endl;
	return 0;
}