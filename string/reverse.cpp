// Reverse a string (without using strrev).

#include<iostream>
using namespace std;

int main() {
    string name = "sakshi";
    
   int start = 0;
   int end = name.length() - 1;

   while (start < end)
   {
       int next = name[start];
       name[start] = name[end];
       name[end] = next;
       start++;
       end--;
   }

   cout<<"Reversed string is : "<<name;
   
    return 0;
}