#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout<<"sum of factors of "<<n<<sum<<endl;
    if (n * 2 == sum)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not perfect number";
    }

    return 0;
}