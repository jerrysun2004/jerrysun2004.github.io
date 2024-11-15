#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

#define forn() for (int i=0; i<10; i++)

int main(){
		
multiset<char> musetcar;
musetcar.insert('c');
musetcar.insert('b');
cout << *musetcar.begin();
musetcar.erase(musetcar.begin());
cout << *musetcar.begin();
for (int i=0; i<10; i++)
cout << i << endl;
forn() cout << 3 << endl;

template <typename T>
inline void read(T &f) {
    f = 0; T fu = 1; char c = getchar();
    while (c < '0' || c > '9') { if (c == '-') { fu = -1; } c = getchar(); }
    while (c >= '0' && c <= '9') { f = (f << 3) + (f << 1) + (c & 15); c = getchar(); }
    f *= fu;
}
 
template <typename T>
void print(T x) {
    if (x < 0) putchar('-'), x = -x;
    if (x < 10) putchar(x + 48);
    else print(x / 10), putchar(x % 10 + 48);
}
 
template <typename T>
void print(T x, char t) {
    print(x); putchar(t);
}
std::vector<char> v;
if (FILE *fp = fopen("filename", "r"))
{
	char buf[1024];
	while (size_t len = fread(buf, 1, sizeof(buf), fp))
		v.insert(v.end(), buf, buf + len);
	fclose(fp);
}



	return 0;
}