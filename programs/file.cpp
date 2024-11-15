// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a fileddd.\n";
  myfile.close();
  cout <<"hellowrodl" << endl;
  
   // For getting input from input.txt file 
      freopen("input.txt", "r", stdin); 
    
      // Printing the Output to output.txt file 
      freopen("output.txt", "w", stdout); 
      int a; 
      cin >> a;
      cout << a;
      cout << "getting better at coding is pretty hard" << endl;
      return 0;
}