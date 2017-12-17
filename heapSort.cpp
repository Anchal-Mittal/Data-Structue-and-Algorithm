#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
	int array[10];
	Sort();
	void getElement();
	void swap(int &num1,int &num2);
	void maxHeapify(int sizee ,int i);
	void heapSort();
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

void Sort:: swap(int &num1,int &num2){
   	int temp=num1;
   	num1=num2;
   	num2=temp;
}

void Sort ::maxHeapify(int size,int i){

		 int largest=i;
		 int left=2*i+1;
		 int right=2*i+2;
		 if ((array[largest]<array[left])&&(left<size))
			 largest=left;
		 if ((array[largest]<array[right])&&(right<size))
		    largest=right;
		 if (largest!=i){
  			swap(array[largest],array[i]);
			maxHeapify(size,largest);
	    	}
   }

void Sort ::heapSort(){

	  for (int i=size/2-1;i>=0;i--){
	  	maxHeapify(size,i);
	  }
	  for (int i=size-1;i>=0;i--){
		   swap(array[0],array[i]);
		   maxHeapify(i,0);
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
    object.heapSort();
	object.display();
return 0;
}
