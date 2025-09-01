#include <iostream>
using namespace std;

int main()
{
    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";
    int option;
    cout << "Enter your option : \n";
    cin >> option;
    int a, b, c;
    cout << "Enter two numbers : \n";
    cin >> a >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    }
    cout << "Result is : " << c;
    return 0;
}