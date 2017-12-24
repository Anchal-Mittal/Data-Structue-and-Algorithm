				#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
	int array[10];
	Sort();
	void getElement();
	void quickSort(int low, int size);
  int partition(int low , int size);
  void display();
  void swap(int &num1 ,int &num2){
     int temp=num1;
     num1 =num2;
     num2=temp;
    }
};

Sort::Sort(){
	for(int i=0;i<size;i++)
	  array[i]=0;
	size=0;
}

void Sort::getElement(){
	cout<< "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY"<< endl;
	for(int i=0;i<size;i++)
	   cin >> array[i];
}

int Sort ::partition(int low,int sizee){
int i=low-1;
int pivot=array[sizee];
    for(int j=low;j<sizee;j++){
        if(array[j]<=pivot){
            i++;
            swap(array[j],array[i]);
        }
    }
 swap(array[i+1],array[sizee]);
return (i+1);
}

void Sort ::quickSort(int low , int sizee){
    if(low<sizee){
       int p=partition(low,sizee);
       quickSort(low,p-1);
       quickSort(p+1,sizee);
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
	object.quickSort(0,object.size-1);
	object.display();
return 0;
}
