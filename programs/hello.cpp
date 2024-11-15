
#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;


	


int func(){
    stack<int> si;
    for (int i=0; i<5; i++){
    si.push(i);
    }
    for (int i=0; i<5; i++){
     cout << si.top();
     si.pop();
    }
    cout << &si << endl;

    vector<int> vi;
    for (int i=0; i<10; i++){
    vi.push_back(i);
    }
    for (int i=0; i<vi.size(); i++){
    cout << vi.at(i) << endl;
    }
    return 0;

}






int main(){
		int i=0;
	while (i<10){
	cout << i << endl;
i++;
cout << "hello world" << endl;
}
func();
int n;
    scanf("%d",&n);
	return 0;
}
