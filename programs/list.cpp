#include <algorithm>
#include <iostream>
#include <list>
#include <map>

using namespace std;

list <int> lia;
map<int,int> mi;
int li(){
	for (int i=0; i<10; i++){
		lia.push_back(i);
		cout << lia.back() << endl;

	}
	
cout << lia.size();
	cout << endl;
	mi.insert(pair<int,int>(1,0));
	mi[2]=3;
	map<int,int>::iterator i;
	for (i=mi.begin(); i!=mi.end(); i++){
		cout << "map!" << endl;
			cout << i->first << i->second << endl;
		}
	return 0;
}

int main(){
	li();
	int a=lia.size();
	for (int i=0; i<a; i++){
		cout << lia.front();
	
	lia.pop_front();
	cout << lia.back();
}
if (lia.empty())
cout << "hello world" << endl;
cout << endl << lia.size();



	return 0;
}