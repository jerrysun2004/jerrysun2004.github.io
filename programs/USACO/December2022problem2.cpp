#include <algorithm>
#include <iostream>

using namespace std;
int mn;
bool wins;
bool pri;
bool prim(int x){
	for (int i=2; i<x/2; i++)
		if (x%i==0)
			return false;
	return true;
}
int func(int x){

	if (x%4==0)
		return x/4;
	if (x%4==2)
		return x/4+1;
	if (prim(x)){
		pri=true;
		return 1;
	}
	if (prim(x-4))
	return 2;
	return 3;
}
void prime(int x){
	if (x%4==0){
		if (func(x)<mn)
		{
			mn=func(x);
			wins=false;
		}
		if (func(x)==mn)
		{
			mn=func(x);
			wins=false;
		}
	
	}
	else{
		if (func(x)<mn){
			mn=func(x);
			wins=true;
		}
		if (func(x)==mn)
		{	
			if (index[])
			mn=func(x);
			wins=true;
		}
		
	}
}

void solve(){

		int n; cin >> n;
		int a[n];
		mn=5*1000000;
		wins=false;
        pri=false;
        int index[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
			index[a[i]]=i;
		}
		sort(a, a+n);
		for (int i=0; i<n; i++){
			if (pri==true)
			{
				cout <<"Farmer John" << endl;
				return;
			}

			prime(a[i]);
		}

		if (wins==true){
			cout << "Farmer John" << endl;
		}
		else {
			cout <<"Farmer Nhoj" << endl;
		}

}



int main(){
		int t; cin >> t;
		for (int i=0; i<t; i++)
			solve();



	return 0;
}