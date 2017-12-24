#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
	int array[10];
	Sort();
	void getElement();
	void insertionSort();
	void display();
};

Sort::Sort(){
	for(int i=0;i<size;i++)
	  array[i]=0;
	size=0;
}

void Sort::getElement(){
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
    cin >> size;
    for(int i=0;i<size;i++)
	   cin >> array[i];
}

void Sort ::insertionSort(){
	int key,j;
	for(int i=0;i<size;i++){
		key=array[i];
		j=i-1;
		while((j>=0)&&(array[j]>key)){
			array[j+1]=array[j];
			j--;
		}
		 array[j+1]=key;
	}
}
void Sort::display(){
	cout<<"THE SORTED ARRAY IS"<< endl;
	for (int i=0;i<size;i++)
	  cout << array[i]<<" "<< endl;
}


int main(){
	Sort object;
    object.getElement();
   	object.insertionSort();
	object.display();
return 0;
}
