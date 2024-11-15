#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

//why use typename instead of another name for the variable name it is confusing becausing typename is a keyword
template <class a>

// function using the template
void printArray(a* arr, int len)
{
    for (int i = 0; i < len; i++) {
        cout << *arr << " ";
        ++arr; // pointing to next element
    }
    cout << endl;


}

struct s{
    int a,b,c;
    s() {};
    s(int x,int y){
        a=x; b=y;
    }
    s(int x,int y, int z){
        a=x; b=y; c=z;
    }
    operator < (int var){
        if (this.a>var)
            return true;
        return false;
    }
};



// main code/ main function
int main()
{
    // declaring character array
    char chrArr[] = "IncludeHelp";
    //declaring integer array
    int numArr[] = { 10, 20, 30, 40, 50 };
    vector<s> hello;
    s news=s();
    news=s(3,4,6);
    news=s(444,444);
    hello.push_back(s(1,3,5));
    hello.push_back(news);
    cout << hello[0].a << endl;
    cout << hello[0].b << endl;
    cout << hello[0].c << endl;
    cout << hello[1].a << endl;
    cout << hello[1].b << endl;
    cout << hello[1].c << endl;
    //printing array elements
    cout << "chrArr: ";
    printArray(chrArr, strlen(chrArr));

    cout << "numArr: ";
    printArray(numArr, 5);

    //passing direct string
    cout << "Hello: ";
    printArray("Hello", 5);

    return 0;
}