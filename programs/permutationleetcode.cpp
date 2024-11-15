#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

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
	string s;
	int ans[n];
	if (p>fact(n))
		return 0;
	int a=p;
	for (int i=0; i<n-2; i++){
		ans[i]=a/fact(n-1-i);
		//cout << a << " " << fact(n-1-i) << " " << ans[i] << endl;
		
		if (a==ans[i]*fact(n-1-i))
		{
			
			ans[i]-=1;
			a-=ans[i]*fact(n-1-i);
			//cout << "digit index " << ans[i] << endl;
			//cout << endl;
			
			continue;

		}
		//cout << "digit index " << ans[i] << endl;
		a-=ans[i]*fact(n-1-i);
		//cout << "a is " << a << endl;
		//cout << endl;
	}
	if (a==1){
		ans[n-2]=0;
		ans[n-1]=1;
	}
	if (a==2){
		ans[n-2]=1;
		ans[n-1]=0;
	}
	//for (int i=0; i<n; i++)
		//cout << ans[i] << endl;
	//cout << endl;
	vector<int> vi;
	for (int i=0; i<n; i++)
		vi.push_back(i);
	
	for (int i=0; i<n; i++)
	{
		
		int c=ans[i];
		ans[i]=vi[c];
		
		if (i==n-1)
			continue;
		vi.erase(vi.begin()+c);
	}
	for (int i=0; i<n; i++)
		cout << ans[i]+1 ;
	cout << endl;
	for (int i=0; i<n; i++)
			s.push_back(ans[i]+1+'0');
	cout << s << endl;
	return 0;
	
}


int main(){
	
	
		for (int j=1; j<fact(5)+1; j++)
			permutation(5,j);

	/*for (int i=0; i<12; i++)
		cout << arr[i] << endl;*/
	return 0;
}