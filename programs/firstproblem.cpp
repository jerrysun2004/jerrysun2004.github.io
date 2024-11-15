/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID:  jsun5041
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int mod(string s){
   int n = 1;
   for (int i=0; i<s.size(); i++){
      n*=(s[i]-'A'+1)%47;
   }
   return n%47;
}

bool doesitwork(string a, string b){
   return mod(a)==mod(b);
}

int main() {
   ifstream fin("ride.in");
   ofstream fout("ride.out");
   string a,b;
   fin >> a >> b;
   fout << (doesitwork(a,b) ? "GO" : "STAY") << endl;
    return 0;
}
