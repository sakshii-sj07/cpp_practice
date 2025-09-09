#include<iostream>
using namespace std;

#define PI 3.14
#define max(a,b) (a>b?a:b)
#define msg(x) #x
#define SQR(x) (x*x)

int main() {

    cout<<PI<<endl;
    cout<<max(23,12)<<endl;
    cout<<msg(sakshi)<<endl;
    cout<<SQR(9)<<endl;
    
    return 0;
}