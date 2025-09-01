#include<iostream>
using namespace std;

int main() {
        int A[2][3] = {12,34,21,36,83,20};
        int B[2][3] = {31,56,48,91,20,52};
        int C[2][3];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
            
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<"Sum of matrix is : "<< C[i][j]<<endl;
            }
            cout<<endl;
        }
        
        
    return 0;
}