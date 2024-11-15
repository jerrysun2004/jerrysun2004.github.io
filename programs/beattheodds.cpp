#include <algorithm>
#include <iostream>

using namespace std;

void solve(){
	int n; cin >> n;

	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	int counter=0;
	for (int i=0; i<n; i++)
		if (a[i]%2==0)
			counter++;
	cout << max(counter,n-counter) << endl;
}
int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; i++)
		solve();
}