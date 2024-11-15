#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;
int dfs(vector<vector<int>> & vi; int currv, int edge,int id){
    if (edges[id]==currv){
        for (int next : edges[id])
            edges[id]=currv;
        dfs(vi,next,edge,id);
    }
}

vector<int> hid;
int query(int l, int r, int k)
{
    cout << "? " << l + 1 << " " << r + 1 << " " << k << endl;
    /*set<int> s;
    for (int i = l; i <= r; i++) s.insert(hid[i] / k);
    return s.size();*/
    int x;
    cin >> x;
    return x;
}
void end(int x)
{
    cout << "! " << x + 1 << endl;
    exit(0);
}
int main()
{
    int n;
    cin >> n;
    //hid.resize(n);
    //for (int i = 0; i < n; i++) cin >> hid[i];
    // najdeme ze na ktorej pozicii je 1
    int lo = 0, hi = n - 1;
    int half = -1;
    map<pair<int, int>, int> cnt;
    cnt[{0, -1}] = 0, cnt[{n, n - 1}] = 0, cnt[{0, n - 1}] = 1;
    while (lo + 1 < hi)
    {
        if (lo == hi) break;

        int mi = (lo + hi) / 2;

        int len1 = mi + 1, len2 = n - mi - 1;
        int ans1 = query(0, mi, 2), ans2 = query(mi + 1, n - 1, 2);

        int cnt1 = ans1 * 2 - len1, cnt2 = ans2 * 2 - len2;

        if (half == 0) cnt1--;
        if (half == 1) cnt2--;

        if (cnt1 > cnt2) hi = mi;
        if (cnt1 < cnt2) lo = mi + 1;
        if (cnt1 == cnt2 && half == -1) // specialny pripad, potrebujeme este jednu query
        {
            if (!mi)
            {
                if (query(mi + 1, n - 1, n) == 2) hi = mi, half = 1;
                else lo = mi + 1, half = 0;
            }
            else
            {
                if (query(0, mi, n) == 1) hi = mi, half = 1;
                else lo = mi + 1, half = 0;
            }
            if (half == 0) cnt1--;
            if (half == 1) cnt2--;
        }
        cnt[{0, mi}] = cnt1;
        cnt[{mi + 1, n - 1}] = cnt2;
    }
    if (lo + 1 == hi)
    {
        if (n % 2 == 0 && half == -1)
        {
            if (!lo)

            {
                if (query(hi, n - 1, n) == 2) end(lo);
                else end(hi);
            }
            else
            {
                if (query(0, lo, n) == 2) end(hi);
                else end(lo);
            }

        }
        else
        {
            if (cnt[{0, lo - 1}] == cnt[{0, hi}])
            {
                int qu = query(0, lo, 2);
                cnt[{0, lo}] = qu * 2 - (lo + 1);
                if (half == 0) cnt[{0, lo}]--;
                if (cnt[{0, lo - 1}] + 1 == cnt[{0, lo}]) end(lo);
                else end(hi);
            }
            else // to iste ale z opacnej strany
            {
                int qu = query(hi, n - 1, 2);
                cnt[{hi, n - 1}] = qu * 2 - (n - hi);
                if (half == 1) cnt[{hi, n - 1}]--;
                if (cnt[{hi + 1, n - 1}] + 1 == cnt[{hi, n - 1}]) end(hi);
                else end(lo);
            }
        }
    }
    else end(lo);
    return 0;
}
//Global codeforces round 24 problem G3 Doremy