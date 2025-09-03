// count number of vowels , consonants and words.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "How many words";
    string::iterator it;
    int vowels = 0, consonants = 0, space = 0;

    for (it = sentence.begin(); it != sentence.end(); it++)
    {
        if (*it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U' ||
            *it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u')
            vowels++;
        else if (*it == ' ')
            space++;
        else
            consonants++;
    }

    cout<<"vowels "<<vowels<<endl;
    cout<<"consonants "<<consonants<<endl;
    cout<<"words " <<space+1<<endl;

    return 0;
}