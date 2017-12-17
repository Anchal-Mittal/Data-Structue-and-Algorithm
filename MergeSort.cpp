#include<iostream>
using namespace std;
class Sort{
	public:
	int size;
  int left;
  int right;
  int array[10];
	Sort();
	void getElement();
	void mergeSort(int left,int right);
  void merge(int left,int right,int mid);
	void display();
};

Sort::Sort(){
	for(int i=0;i<size;i++)
	  array[i]=0;
	size=0;
  left=0;
  right=size-1;
}

void Sort::getElement(){
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
    cin >> size;
  for(int i=0;i<size;i++)
	  cin >> array[i];
}

void Sort ::mergeSort(int left,int right){
    int mid;
    if(left<right){
       mid= (left+right) /2;  
       mergeSort(left,mid);
       mergeSort(mid+1,right);
       merge(left,right,mid);
       }
}       

void Sort:: merge(int left,int right,int mid){
        int leftSize=mid-left+1;
        int rightSize=right-mid;
        int leftarray[10];
        int rightarray[10];
  
        for(int i=0;i<leftSize;i++)
            leftarray[i]=array[i+left];
        
        for(int i=0;i<rightSize;i++)
            rightarray[i]=array[mid+1+i];
        
        int leftlimit=0;
        int rightlimit=0;   
        int var=left;
        
        while((leftlimit<leftSize)&&(rightlimit<rightSize)){
            if(leftarray[leftlimit]>=rightarray[rightlimit]){
                  array[var]=rightarray[rightlimit];
                  rightlimit++;
                }
            else{
                array[var]=leftarray[leftlimit];
                leftlimit++;
                }
           var++;
           }
       
         while(rightlimit<rightSize){
             array[var]=rightarray[rightlimit];
             rightlimit++;
             var++;
            }
        
        while(leftlimit<leftSize){
             array[var]=leftarray[leftlimit];
             leftlimit++;
             var++;
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
   	object.mergeSort(0,object.size-1);
	  object.display();
return 0;
}
