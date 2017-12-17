#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
  int array[10];
	Sort();
	void getElement();
	void radixSort();
  void bubbleSort(int arr[10]);
  void display();
};

Sort::Sort(){
	for(int i=0;i<size;i++)
	  array[i]=0;
	size=0;
}

void Sort ::bubbleSort(int array[10]){
	int temp;
	for (int i=0;i<=size/2;i++){
		for ( int j=0;j<size-1;j++){
       if (array[j]>array[j+1]){
			   temp=array[j];
			   array[j]=array[j+1];
			   array[j+1]=temp;
		    }
			}
	 }
 }
 
void Sort::getElement(){
	  cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
    cin >> size;
    cout <<"ENTER THE ELEMENTS THAT HAVE SAME NUMBERS OF DIGITS "<< endl;
    for(int i=0;i<size;i++)
	    cin >> array[i];
}

void Sort::radixSort(){
int intemed[10];
int num=array[0];
    int k=0;
    while(num!=0){
           for(int i=0;i<size;i++){
                intemed[i]=array[i]/pow(10,k);   
                }
   bubbleSort(intemed);
              num=num/10;
    }
    for(int i=0;i<size;i++)
        array[i]=intemed[i];
}
                         
void Sort::display(){
	cout<<"THE SORTED ARRAY IS"<< endl;
	for (int i=0;i<size;i++)
	   cout << array[i]<<" "<< endl;
}


int main(){
	  Sort object;
    object.getElement();
   	object.radixSort();
   	object.display();
return 0;
}
