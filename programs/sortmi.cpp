#include <algorithm>
#include <iostream>
using ll = long long;
using namespace std;
const int MOD = 1e9+7;
struct mi {
    int v; explicit operator int() const { return v; } 
    mi() { v = 0; }
    mi(ll _v):v(_v%MOD) { v += (v<0)*MOD; }
};
mi& operator+=(mi& a, mi b) { 
    if ((a.v += b.v) >= MOD) a.v -= MOD; 
    return a; }
mi& operator-=(mi& a, mi b) { 
    if ((a.v -= b.v) < 0) a.v += MOD; 
    return a; }
mi operator+(mi a, mi b) { return a += b; }
mi operator-(mi a, mi b) { return a -= b; }
mi operator*(mi a, mi b) { return mi((ll)a.v*b.v); }
mi& operator*=(mi& a, mi b) { return a = a*b; }

int main(){
    mi a=0; mi b=194;
    cout << a+b << endl;

    return 0;
}