// Compare two strings without using strcmp().

#include <iostream>
using namespace std;

int main()
{
    string str1;
    cout << "Enter str1 : ";
    getline(cin, str1);

    string str2;
    cout << "Enter str2 : ";
    getline(cin, str2);

    int i = 0;
    bool equal = true;

    while (i < str1.length() && i < str2.length())
    {
        if (str1[i] != str2[i])
        {
            equal = false;
            if (str1[i] > str2[i])
            {
                cout << "String 1 is greater.";
            }
            else
            {
                cout << "String 2 is greater.";
            }
            break;
        }
        i++;
    }

        if (equal)
        {
            if (str1.length() == str2.length())
            {
                cout << "Strings are equal.";
            }
            else if (str1.length() > str2.length())
            {
                cout << "String 1 is greater.";
            }
            else
            {
                cout << "String 2 is greater.";
            }
        }
        return 0;
    }