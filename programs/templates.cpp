#include <vector>
#include <iostream>
#include <map>
#include <numeric>

using namespace std;


template <class T> using V = vector<T>;
template<class T> using M = map<T,T>;
template<class T,class L> using M2=map<T,L>;

typedef long long ll;

#define all(x) begin(x), end(x)



int main(){
V<int> vi;
	for (int i=0; i<10; i++)
	vi.push_back(i);
ll a=0;
cout << a << endl;
iota(all(vi),5);
for (int i=0; i<10; i++)
	cout << vi[i] << endl;

cout << endl; 
M<int> mi;
mi[0]=1;
cout << mi[0] << endl;
M2<char,int> mid;
mid['a']=2;
cout << mid['a'] << endl;

	return 0;
}