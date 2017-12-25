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
  void linearSearch(int element,int);

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
 cout <<"ENTER THE ELEMENT DO U WANT TO INSERT  "  <<endl;
 for(int i=0;i<size;i++){
 	cin >> array[i];
 }
}


void Sort::display(){
	for(int i=0;i<size;i++){
		cout <<array[i]<<" ";
	}
}

void Sort::linearSearch(int element,int i=0){
   if(i>size){
   	cout <<"ELEMENT NOT FOUND " << endl;
   	return;
   }
   if(array[i]==element){
	 cout <<"ELEMENT EXIST AT "<< i+1<<endl;
	 return;
   }
   linearSearch(element,i+1);

}

int main(){
	int element;
	Sort sort;
    sort.insert();
	sort.display();
	cout <<endl;
	cout <<"ENTER THE ELEMENT DO U WANT TO SEARCH "<<endl;
	cin >>element;
    sort.linearSearch(element);

	return 0;
}
