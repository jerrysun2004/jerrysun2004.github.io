#include <algorithm>
#include <iostream>

using namespace std;

//it serves as a pointer assignmetn and also as a dereference operator?? very confusing
//*p =a is an error because it is an lvalue
//Undefined symbols for architecture arm64:
 // "_main", referenced from:
//     implicit entry/start for main executable
//ld: symbol(s) not found for architecture arm64
//clang: error: linker command failed with exit code 1 (use -v to see invocation)
// & d makes sense and the reasons for having pointers also makes sense
//now what about func(*d), probably not very relevant
void func(int d){
	d=d+1;

}
int main(){
	int a=22;
	int l=a;
	cout << &l << endl;
	cout << a << endl;
	cout << &a << endl;
	int* p =&a;
	cout << p << endl;
	cout << *p << endl;
	int &d=a;
	cout << d << endl;
	cout << &d << endl;
	int z=21;
	func(z);
	cout << z << endl;
	


	return 0;
}