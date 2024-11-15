#include <algorithm>
#include <iostream>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	bool good=false;
	int mn=-1;
	int minindex=-1;
	for (int i=0; i<n; i++){
		cin >> a[i];
		if (a[i]==1)
			good=true;
		if (a[i]<mn){
		mn=a[i];
		minindex=i;
	}
	}
	if (!good)
			cout << "NO" << endl;
	else{
		cout << "YES" << endl;
	}

	
	
}
int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; i++)
		solve();

	return 0;
}g