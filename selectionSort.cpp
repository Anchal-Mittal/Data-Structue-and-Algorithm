#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
	int array[10];
	Sort();
	void getElement();
	void selectionSort();
	void display();
};

Sort::Sort(){
    
	for(int i=0;i<size;i++)
	  array[i]=0;
	size=0;
}

void Sort::getElement(){
	cout << "ENTER THE SIZE OF THE ARRAY "<<endl;
    cin >>size;
    for(int i=0;i<size;i++)
	   cin >> array[i];
}

void Sort ::selectionSort(){
	  int min,temp;
	  for(int i=0;i<size;i++){
		  min=i;
		   for(int j=i+1;j<size;j++){
			   if(array[min]>array[j])
				  min=j;
		    }
            temp=array[i];      
		    array[i]=array[min];
            array[min]=temp;          
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
	object.selectionSort();
	object.display();
return 0;
}
