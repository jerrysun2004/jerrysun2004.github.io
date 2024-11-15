#include <iostream>
#include <vector>


using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum truefalse{ True, False};
struct hello{
    int x,y, z;
};
int subsetsum[10];
 vector<vector<int> > edges;
int val[10];
int dfsforsum(int source,int prev){
    if (source==prev)
        return 0;
    int sum=val[source];
    for (auto i: edges[source]){
        if (i!=prev)
            sum+=dfsforsum(i,source);
    }
    return sum;

}




int main()
{
    vector<pair<int,int> > vpi;
    vpi.push_back(make_pair(3, 4));
    vpi.push_back(make_pair(3, 4));
    vpi.push_back(make_pair(3, 4));
    vpi.push_back(make_pair(3, 4));
    for (auto [a,_]:vpi)
        cout << a << endl;

    week today;
    today = Wednesday;
    cout << "Day " << today+1 << endl;;
   
    week hola=Sunday;
    cout << "Day " << hola;
    truefalse tf=False;
    cout << "true false " << tf+1 << endl; 
    cout << (1==2 ? 3:4) << endl;
    hello a={22,23,24};
    vector<hello> vhello;
    vhello.push_back(a);
    vhello.push_back(a);
    for (int i=0; i<vhello.size(); i++)
        cout << vhello[i].x << endl;
    cout << a.x << endl;
    return 0;
}