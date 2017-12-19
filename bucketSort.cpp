#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
float array[10];
int size;

void sort(){
vector <float> bu[size];
for(int i=0;i<size;i++){
		int b=size*array[i];
		bu[b].push_back(array[i]);
	}
for(int i=0;i<size;i++){
   sort(bu[i].begin(),bu[i].end());
    }
   int index=0;
	 for(int i=0;i<size;i++){
	 	for(int j=0;j<bu[i].size();j++){
	 		array[index++]=bu[i][j];
		 }
	 }
}

int main(){
  cout << "ENTER THE SIZE OF THE ARRAY " << endl;
	cin>> size;
	cout << "ENTER THE ELEMENTS OF TEH ARRAY "<< endl;
	for (int i=0;i<size;i++){
		cin >> array[i];
	}
	sort();
	cout << "THE SORTED ARRAY IS " << endl;
	for(int j=0;j<size;j++){
		cout << array[j] << " ";
	}
return 0;
}
