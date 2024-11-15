#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main(){
vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.pop_back();
    for (int i: vi)
        cout << i << endl;
    cout << "hello world" << endl;


    return 0;
}