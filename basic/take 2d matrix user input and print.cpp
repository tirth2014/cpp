#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int rows,cols;
    
    cout << "Enter no. of rows: " << endl;
    cin >> rows;
    
    cout << "Enter no. of cols: " << endl;
    cin >> cols;
    
    vector<vector<int>> mat(rows, vector<int>(cols));
    
    // Take input in rows x cols 2d matrix
    for (int i = 0; i < rows; i++) {
        cout << "enter space separated values for row "<< i+1 << ": ";
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
    cout << endl;
    
    // Print the 2d matrix
    for(int i=0; i<rows; i++){
        for(int j=0; j< cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
