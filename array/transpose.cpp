// Find the transpose of a matrix.

#include<iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter rows and columns of matrix : ";
    cin>>m>>n;

    int A[m][n], B[n][m];

    cout<<"Enter elements in A"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>A[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
             B[j][i] = A[i][j];
        }
        
    }

    cout<<"Transpose of matrix."<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}