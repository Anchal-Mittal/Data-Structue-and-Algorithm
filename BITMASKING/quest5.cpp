//============================================SUBSET OF STRING===========================================================

#include<iostream>
#include<cstring>
using namespace std;

//=========================================PRINT THE SUBSTRING ACC TO SET BITS OF MASK=====================================

void subsetGeneration(char *array,int mask){
	int i=0;
	while(mask > 0){
		if(mask&1)
  		 cout << array[i];
		i++;
		mask= mask>>1;
  }
	cout << endl;
}

//==================================================GENERATION OF MASK====================================================

void substring(char *str){
	 int size=strlen(str);
   for(int j=0;j<=(1<< size)-1;j++)
	    subsetGeneration(str,j);
}

//======================================================MAIN FUNCTION=====================================================

int main(){
  char str[10];
	cout<<"ENTER THE String "<< endl;
	cin>> str;
	substring(str);
}
