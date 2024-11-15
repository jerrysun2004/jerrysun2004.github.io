// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
using str= string;
#define sz =size;


using pii =pair<int,int>;

int func(pair<int,int> vpi, pair<int,int> vpi2 ) 
{
  if (vpi.first<= vpi.second && vpi2.first <=vpi.second)
    return 0;
  return 1;
}

int resizefunc(vector<int> &vi){
  vi.resize(1);
  while (vi.size()<=64){
    cout << vi.size() << endl;
    vi.resize(2*vi.size());
  }
  return 0;
}



int main () {
  /*ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();*/
  /*vector<pair<int,int> > vpi;
   freopen("example.txt", "r", stdin); 
   int a;
   cin >> a;
   vpi.resize(a);
   for (int i=0; i<a; i++)
    cin >> vpi[i].first >> vpi[i].second;
 freopen("output.txt", "w", stdout); 
    for (int i=0; i<a; i++)
    cout << vpi[i].first << " " << vpi[i].second << endl;
  pii c={3,4};
  pii b={4,5};
  cout << func(c,b);
  vector<int> vi2;
  fclose(stdout);*/
   vector<int> vi2;
  resizefunc(vi2);
  return 0;
}