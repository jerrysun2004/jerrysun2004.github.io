#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

vector<vector<int> > vi (10,vector<int>(10));

int insertionsort(int arr[],int k){
	if (k<=1 ){
		cout << "already sorted" << endl;
		return 0;
	}
	for (int i=1; i<k; i++){
		int b=i;
		while (arr[b]<arr[b-1])
		{
			if (b==0){
				break;
			}
			int c=arr[b-1];
			arr[b-1]=arr[b];
			arr[b]=c;
			b--;

					}
	}
	return 0;

}
bool visit[10];
int depth=0;
map<int,int> mip;

int dfs(int x){

	if (visit[x])
		return depth;
	visit[x]=true;
	for (int i=0; i<10; i++)	
		if (!visit[i])
				dfs(i);
			return 0;
}
int fact(int x){
	if (x==0)
		return 1;
	int a=1;
	for (int i=1; i<x+1; i++)
		a*=i;
	return a;
}
int arr[100];
int permutation(int n,int p){
	
	if (p>fact(n))
		return 0;
	int d=n;
	int i=0;
	while (d!=0){
		{
			int a=fact(d-1)/p;
			arr[i]=a;
			i++;
			d--;
		}
	}

	return 0;
}
int main(){
	int arr1[15]={1,2,3,6,5,7,8,9,10,11,31,-7,3,8,4};
	for (int i=0; i<15; i++)
		cout << arr1[i] << endl;
	insertionsort(arr1,15);
	for (int i=0; i<15; i++)
		cout << arr1[i] << endl;
	stack<int> si;
	for (int i=0; i<10; i++)
			si.push(i);
	for (int i=0; i<10; i++){
		cout << si.top() << endl;
		si.pop();
	}
	/*for (int i=0; i<10; i++)
			for (int j=0; j<10; j++)
					vi[i][j]=j;
	for (int i=0; i<10; i++)
		for (int j=0; j<10; j++)
				cout <<vi[i][j] << endl;*/

	return 0;
}