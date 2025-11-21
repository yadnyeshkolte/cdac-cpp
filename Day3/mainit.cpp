#include<iostream>
using namespace std;

int main(){
	int row, col;
	cout << "enter row and column for arr1: ";
	cin >> row >> col;

	int row2,col2;
	cout << "enter row and column for arr2: ";
	cin >> row2 >> col2;

	int arr1[row][col];
	int arr2[row2][col2];



	if(col != row2){
		cout << "cannot multiply" << endl;
	}
	else{
		for(int i = 0; i < row; i++){
	    	for(int j = 0; j < col; j++){
	    		
	    		cin >> arr1[i][j];
	    	}
        }

	    for(int i = 0; i < row2; i++){
	    	for(int j = 0; j < col2; j++){
	    		cin >> arr2[i][j];
	    	}
	    }


	    int temp[100][100] = {0};
	    for(int i = 0; i < row; i++){
	    	for(int j = 0; j < col2; j++){
	    		for(int k = 0; k < col; k++){
	    			temp[i][j] += arr1[i][k] * arr2[k][j];
	    		}
	    	}
	    }

		for(int i = 0; i<row; i++){
			for (int j = 0; j < col2; j++)
			{
				cout << "|" <<temp[i][j] << "|" << " ";
			}
			cout << endl;
			cout << "----" << endl;
		}
	}


	return 0;
}