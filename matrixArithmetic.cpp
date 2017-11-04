
#include <iostream>

using namespace std;

int main() {
	int rows1;
	int matrix1[10][10];// DECLARATION OF 2D ARRAYS/MATRIX
	int matrix2[10][10];
	int result[10][10];
   // INTIALIZATION OF THE MATRIX
	cout << "ENTER THE NUMBER OF ROWS OF MATRIX 1" << endl;
	cin >> rows1;
	cout << "ENTER THE NUMBER OF COLUMNS  OF MATRIX 1" << endl;
	int columns1;
	cin>> columns1;
	cout << "ENTER THE ELEMENTS OF THE MATRIX1 "<< endl;
	for (int i=0; i<rows1 ; i++) {
		for (int j=0; j< columns1; j++) {
			cin>>matrix1[i][j];

		}
	}

	cout <<"ELEMENTS OF THE MATRIX 1 IS" <<endl;
	for (int i=0; i<rows1 ; i++) {
		for (int j=0; j< columns1; j++) {
			cout << matrix1[i][j]<<" ";
		}
		cout << endl;
	}


	int rows2;
	cout << "ENTER THE NUMBER OF ROWS OF MATRIX 2" << endl;
	cin >> rows2;
	cout << "ENTER THE NUMBER OF COLUMNS  OF MATRIX 2" << endl;
	int columns2;
	cin> > columns2;
  
        //INPUT THE ELEMENTS OF MATRIX 
  cout << "ENTER THE ELEMENTS OF THE MATRIX2 "<< endl;
	for (int i=0; i<rows2 ; i++) {
		for (int j=0; j< columns2; j++) {
			cin >> matrix2[i][j];
		}
	}
  
        // INPUT THE ELEMENTS OF MATRIX 
	cout <<"THE SECOND MATRIX IS " <<endl;
	for (int i=0; i<rows2 ; i++) {
		for (int j=0; j< columns2; j++) {
	 cout <<matrix2[i][j] << " ";
		}
 	 cout << endl;
	}
   
      // ADDITION AND SUBTRACTION OF TWO MATRIX IF DIMENSIONS ARE SAME
	if((rows1==rows2)&&(columns1 ==columns2)) {
	cout << "THE SUM OF TWO MATRIX IS "<<endl;
	for (int i=0; i<rows2 ; i++) {
		for (int j=0; j< columns2; j++) {
		result[i][j]=matrix1[i][j] +matrix2[i][j];
    cout << result[i][j];	
		 	}
		cout << endl;
	}
    
	cout << "THE DIFFERENCE OF TWO MATRIX IS "<<endl;
	for (int i=0; i<rows2 ; i++) {
		  for (int j=0; j< columns2; j++) {
			result[i][j]=matrix1[i][j] - matrix2[i][j];
      cout << result[i][j];	
		 	}
 	cout << endl;
	}
}
  
else 
cout <<"SUM AND ADDITION OF TWO MATRIX CAN NOT BE POSSIBLE" << endl;
return 0;
}





