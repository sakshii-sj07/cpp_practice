// Check if a matrix is symmetric.

#include<iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter rows and columns in matrix : ";
    cin>>m>>n;

    int A[m][n];
    int B[n][m];

    cout<<"Enter elements in A."<<endl;
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

    cout<<"Transpose of MAtrix."<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    bool symmetric = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(A[i][j] != B[i][j])
                symmetric = false;
                break;
        }
        if(!symmetric) break;
    }
    
    if(symmetric) {
        cout<<"Matrix is symmetric.";
    } else {
        cout<<"Matrix is Unsymmetric";
    }
    
    return 0;
}