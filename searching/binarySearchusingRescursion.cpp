#include<iostream>
using namespace std;

class Sort{
  private:
  int array[10];
  public:
  int size;
  Sort();
  void insert();
  void display();
  void binarySearch(int low,int high,int element);

};

  Sort ::Sort(){
	for(int i=0;i<10;i++){
		array[i]=0;
	}
	size =0;
}

void Sort::insert(){
 cout <<"ENTER THE SIZE OF THE ARAAY "<< endl;
 cin >> size;
 cout <<"ENTER THE ELEMENT DO U WANT TO INSERT IN INCREASING ORDER "  <<endl;
 for(int i=0;i<size;i++){
 	cin >> array[i];
 }
}


void Sort::display(){
	for(int i=0;i<size;i++){
		cout <<array[i]<<" ";
	}
}

void Sort::binarySearch(int high,int element,int low=0 ){
 int mid;
 if((low > high)&& (array[mid]!=element)){
    cout << "ELEMENT IS NOT FOUND " << endl;
	return;
  }
 mid=(low+high)/2;
   if(array[mid]==element){
   	cout <<"ELEMENT FOUND AT "<< mid+1<< endl;

   return ;}
 else if(array[mid]>element)
  binarySearch(mid-1,element,1);
 else if(array[mid]<element)
  binarySearch(high,element,mid+1);
}

int main(){
	int element;
	Sort sort;
    sort.insert();
	sort.display();
	cout <<endl;
	cout <<"ENTER THE ELEMENT DO U WANT TO SEARCH "<<endl;
	cin >>element;
    sort.binarySearch(sort.size-1,element);

	return 0;
}
