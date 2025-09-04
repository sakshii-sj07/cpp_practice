//print numbers 1 to n

#include<iostream>
using namespace std;

int printNumbers(int n) {
    if(n == 0) {
        return 0;
    } else {
        printNumbers(n-1);
        cout<<n<<endl;
    }
}
int main() {
    cout<<"The numbers : " <<endl;
    printNumbers(5);
    return 0;
}