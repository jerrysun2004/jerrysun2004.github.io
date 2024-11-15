#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;



bool ispalindrome(string s){
	bool good =true;
	for (int i=0; i<s.size(); i++){
		if (s[i]!=s[s.size()-1-i])
			good=false;
	}
	return good;
	
}

string maxpalindrome(string s){
		string maxlength=" ";
		for (int i=0; i<s.size(); i++){
			for (int j=s.size()-1; j>i; j--)
					{
						
						if (ispalindrome(s.substr(i,j+1)))
						{
							if (j-i+1>maxlength.size())
								maxlength=s.substr(i,j+1);
							
						}
					}
		}



	return maxlength;

}
if (/* condition */)
{
	/* code */


int main(){
		string s;
	
		for (int j=1; j<10; j++)
			s.push_back('a');
		cout << s << endl;
		cout << ispalindrome(s) << endl;
		cout << endl;

		s.clear();
		s.push_back('c');
		for (int j=1; j<10; j++)
			s.push_back('b');
		
		s.push_back('c');
		cout << s << endl;
		cout << ispalindrome(s) << endl;
		cout << endl;

		s.clear();
		s="12345678987654321";
		cout << s << endl; 
		cout << ispalindrome(s) << endl;
		cout << maxpalindrome(s) << endl;
		cout << s.size() << endl;
		cout << endl;
		s.clear();
		s="abad";
		cout << ispalindrome(s) << endl;
	/*for (int i=0; i<12; i++)
		cout << arr[i] << endl;*/
	return 0;
}