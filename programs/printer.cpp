#include <algorithm>
#include <iostream>

using namespace std;

void solve(int n){
    if (n==1){
        cout << 1<< endl;
    
    return;
}
  int mn=10;
   for (int i=1; i<n; i++)
    mn=min(mn,n/i+i-1);
    cout << mn+1 << endl;

}
int main(){
    
    solve(1);
    solve(5);
    solve(10);
    return 0;
}