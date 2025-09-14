// Add, subtract, and multiply two matrices.

#include<iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter rows and columns of matrices : ";
    cin>>m>>n;

   int A[m][n];
   int B[m][n];
   int C[m][n];

   cout<<"Enter elements in A"<<endl;
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        cin>>A[i][j];
    }
    
   }

   cout<<"Enter elements in B"<<endl;
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        cin>>B[i][j];
    }
    
   }

   cout<<"Addition of A and B."<<endl;
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        C[i][j] = A[i][j] + B[i][j];
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
   }

   cout<<"Subtraction of A and b."<<endl;
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        C[i][j] = A[i][j] - B[i][j];
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
   }

   cout<<"Multiplication of A and B."<<endl;
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        C[i][j] = 0;
        for (int k = 0; k < n; k++)
        {
            C[i][j] += A[i][k] * B[k][i];
        }
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
    
   }
   return 0;
}
   
   
   
   
   