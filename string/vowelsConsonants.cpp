// Count the number of vowels and consonants in a string.

#include<iostream>
using namespace std;

int main() {
    string sentence;
    cout<<"Enter sentence : ";
    getline(cin, sentence);

    string::iterator it;
    int vowels=0;
    int consonants=0;

    for ( it = sentence.begin(); it != sentence.end(); it++)
    {
        if(*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' ||
           *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U')
           vowels++;
           else 
           consonants++;
    }
    
    cout<<"Vowels : "<<vowels<<endl;
    cout<<"Consonants : "<<consonants;
    return 0;
}