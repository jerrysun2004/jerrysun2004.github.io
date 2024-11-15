
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
std::ostream& operator <<(std::ostream& output, const pair <T, T> & data)
{
    output << "(" << data.x << "," << data.y << ")";
    return output;
}
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int func(int&& r){
    return r;
}
int main(){
   
  int val = 65;

  std::cout << std::right;       // right-adjusted (manipulator)
  std::cout << std::setw(10);    // set width (extended manipulator)

  std::cout << val << std::endl; // multiple insertions
int b=23;
  
  cout << b << endl;
  for (auto i: dx)
    cout << i << endl;
for (auto i: dy)
    cout << i << endl;

  

    return 0;
}

