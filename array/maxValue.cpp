#include <iostream>
using namespace std;

int main()
{
    int A[] = {12, 23, 34, 98, 45, 56};
    int n = 5, max;
    max = A[0];
    for (int i = 0; i < 5; i++)
    {

        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << max;
    return 0;
}