// Convert a string to uppercase without using built-in functions.

#include<iostream>
using namespace std;

int main() {
    string name = "sakshi";
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i] - 32; 
        cout<<name[i];
    }
    
    return 0;
}