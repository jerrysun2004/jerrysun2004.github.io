#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;



int main(){
	int n; cin >> n;
	vector<vector<int> > vi(n);
	for (int i=n-1; i>=0; i++){
		vi[n-1-i].resize(i);
		for (int j=0; j<i; j++)
			cin >> vi[n-1-i][j];
	}

	int a[n];
	a[0]=0;
	a[1]=vi[0][1];
	for (int i=2; i<n; i++)
	{
		if (vi[i-2][i]>=vi[i-1][i])
			a[i]=a[i-1]+vi[i-1][i];
		else{
			a[i]=a[i-1]-vi[i-1][i];
		}
	}
	int mn=1000000001; int mx=-1000000001;
	for (int i=0; i<n; i++){
		if (a[i]<mn){
			mn=a[i];
		}
		if (a[i]>mx){
			mx=a[i];
		}
	}
	int amount=0;
	if (mx>1000000000)
		 amount=mx-1000000000;
	for (int i=0; i<n; i++)
		a[i]-=amount;
	if (mn<-1000000000)
		int amount=-mn-1000000000;
	for (int i=0; i<n; i++)
		a[i]+=amount;
	for (int i=0; i<n; i++)
		cout << a[i] << endl;


	return 0;
}