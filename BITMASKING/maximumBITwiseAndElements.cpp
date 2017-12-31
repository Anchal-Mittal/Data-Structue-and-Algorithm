#include<iostream>

using namespace std;

int main(){
 int size;
 int array[10];
 cout <<" enter the size of the array " << endl;
 cin >> size;
 cout <<"enter the elements of the array " <<endl;

 for (int i=0;i<size;i++)
    cin >> array[i];

 int result[10];
 int intresult;
 int ele1,ele2;
 int max;
// int resultmax;
// for(int k=0;k< size;k++){
 //resultmax=0;

  for(int i=0;i<size-1;i++){
     ele1=array[i];
     ele2=array[i+1];
     max=ele1&ele2;
    for (int j=1;j<size;j++){

        if(max<(ele1&array[j])){
			max=ele1&array[j];
			ele2=array[j];
          }
        }
       cout << ele1<< ele2;
   max=result[i];
	}
 max=result[0] ;
 for(int i=1;i<size;i++){
    if(max <result[i])
     max=result[i];
    }
 cout << "THE MAXIMUM ELEMENT OF THE ARRAY " << endl;
 cout << max<<" ";
return 0;
}
