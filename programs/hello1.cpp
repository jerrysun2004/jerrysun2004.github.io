#include <bits/stdc++.h>
using namespace std;


    /* code */

    //output and then 16 bits, mips is 32 bits, word is 8 bytes?
    //word is 32 bits
    //mip instruction is 32 bits itself
    //how to laod an address in just 32 bits
    //the answer the way to do it is an offset a
    //how can a load or store instructions specify an address that is the same size as itself
    //sign extended vs zero extended

int main() {
    vector<int> v = {3, 1, 4, 1, 5, 9};
    for (int i=0; i<10000; i++){
    v.push_back(i);
}
    sort(v.begin(), v.end());

    for (int x : v) {
        cout << x << " ";
    }


    cout << endl;
    cout << 'hello' << endl;
    return 0;
}
