#include<iostream>
using namespace std;

int main() {
    float basicSalary;
    float netSalary;
    float percentageOfAllowances;
    float percentageofDeduction;

    cout<<"Enter basic salary , percentage of allowances and percentage of deduction : ";
    cin>>basicSalary>>percentageOfAllowances>>percentageofDeduction;
    netSalary = basicSalary + basicSalary*percentageOfAllowances/100 - basicSalary*percentageofDeduction/100;
    cout<<netSalary;

    return 0;
}