#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
	int array[10];
	Sort();
	void getElement();
	void bubbleSort();
	void display();
};

Sort::Sort(){
	for(int i=0;i<size;i++)
	  array[i]=0;
	size=0;
}

void Sort::getElement(){
    cout << "ENTER THE SIZE OF THE ARRAY"<< endl;
    cin >> size;
	for(int i=0;i<size;i++)
	   cin >> array[i];
}

void Sort ::bubbleSort(){
	int temp;
	for(int i=0;i<=size/2;i++){
		for( int j=0;j<size-1;j++)
		{   if(array[j]>array[j+1]){
			   temp=array[j];
			   array[j]=array[j+1];
			   array[j+1]=temp;
		    }
			
		}
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
	object.bubbleSort();
	object.display();
return 0;
}
