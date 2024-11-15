#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int arr[10][10]={
		{1,0,0,1,1,1,1,1,1,1},
		{1,0,0,1,1,0,1,1,1,1},
		{1,0,0,1,1,1,1,0,1,1},
		{1,0,0,1,1,1,1,1,1,1},
		{1,0,0,1,1,1,1,1,0,1},
		{1,0,0,1,1,1,1,1,1,1},
		{1,1,0,1,0,1,1,1,1,1},
		{0,0,0,1,0,0,1,1,1,1},
		{1,0,0,1,1,1,1,0,1,1},
		{1,0,0,1,1,1,1,1,1,1},
		
	};
bool visited[10][10];
void floodfill(int i, int j){
	if (i<0 || i>9 || j>9 || j<0)
		return;
	if (arr[i][j]==0){
		arr[i][j]=1;
		
	}
	visited[i][j]=true;
	if (!visited[i-1][j])
	floodfill(i-1,j);
if (!visited[i+1][j])
		floodfill(i+1,j);
	if (!visited[i][j-1])
		floodfill(i,j-1);
	if (!visited[i][j+1])
		floodfill(i,j+1);
	return;



}

int main(){
	
	for (int i=0; i<10; i++){
		cout << endl;
			for (int j=0; j<10; j++)
				cout << arr[i][j];
	}
	cout << endl;
	floodfill(2,1);
	for (int i=0; i<10; i++){
		cout << endl;
			for (int j=0; j<10; j++)
				cout << arr[i][j];
	}

}