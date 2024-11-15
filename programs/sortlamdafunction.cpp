#include<array>
#include<functional>
#include <iostream>
#include <algorithm>
using namespace std;
int a,b,c;
int dp[100];

int maxlength (int x){

   for (int i=1; i<x+1; i++)
        {
            if(i>=a){
               
            if (dp[i-a]+1<dp[i]){
                dp[i]=dp[i-a]+1;
            }
        }
        if (i>=b){
            if (dp[i-b]+1<dp[i]){
                dp[i]=dp[i-b]+1;
            }
        }
        if (i>=c){
            if (dp[i-c]+1<dp[i]){
                dp[i]=dp[i-c]+1;
            }
        }
        }
        return dp[x];
}
int main()
{
    for (int i=0; i<100; i++)
        dp[i]=10000;
    dp[0]=0;
    a=2 ;
    b=3;
    c=21;
    for (int i=0; i<100; i++){
        cout << maxlength(i) << endl;
    }
    cout << "hello world" << endl;
    /*array<int, 10> arr = { 1,2,3,4,5,6,7,8,9 };

    sort(begin(arr), 
         end(arr), 
         [](int a, int b) {return a > b; });

    for (auto item : arr)
      cout << item << " ";*/

    return 0;
}