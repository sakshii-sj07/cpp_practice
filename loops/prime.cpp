#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "not prime number";
    }

    return 0;
}