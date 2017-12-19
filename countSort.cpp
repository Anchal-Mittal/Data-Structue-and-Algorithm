#include<iostream>
using namespace std;
int array[10];
int size;
void countSort(){
int countArray[size];
for(int i=0;i<size;i++)
countArray[i]=0;
int sortArray[10];
for(int i=0;i<size;i++)
	countArray[array[i]]=1+countArray[array[i]];
 for(int i=1;i<size;i++)
 	countArray[i]=countArray[i]+countArray[i-1];
 for(int i=0;array[i];i++){
 	 sortArray[countArray[array[i]]-1]=array[i];
	 --countArray[array[i]];
    }
 cout << "The sorted array is "<< endl;
 for (int i=0;i<size;i++)
 	cout <<sortArray[i]<< " ";
}

int main(){
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF TEH ARRAY "<< endl;
	for (int i=0;i<size;i++){
		cin >> array[i];
	  } 
   countSort();
return 0;
}
