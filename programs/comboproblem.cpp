#include <algorithm>
#include <iostream>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	boolg good=false
	int mn=-1;
	int minindex=-1;
	for (int i=0; i<n; i++){
		cin >> a[i];
		if (a[i]==1)
			good=true;
		if (a[i]<mn){
		mn=mn[i]);
		mnindex=i;
	}
	}
	if (!good)
			cout << "-1" << endl;
	if (mnindex==0 || mnindex==n-1)
		cout << "2" << endl;
	else{
		cout << "3" << endl;
	}

	
	
}
int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; i++)
		solve();

	return 0;
}