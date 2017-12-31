//-------------------------------------------PROGRAM FINDING THE NON REPEATING -------------------------------------------

#include<iostream>
using namespace std;

//---------------------------FINDING THE NON REPEATING ------------------------------------------------------------------

void findNonRepeatNumber(int array[10],int size){
   int result=0;
    for(int i=0;i<size;i++)
     	result= array[i] ^ result;

cout << "THE NON REPEATING   " << result;
}

//-------------------------------------------------MAIN FUNCTION---------------------------------------------------------

int main(){
	int array[10],size;
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for (int i=0;i<size;i++){
		cin >> array[i];
	}
    findNonRepeatNumber(array,size);
}
