#include<iostream>
using namespace std;
int main() {
    float num1,num2;
    char op,choice='y';
    while(tolower(choice)=='y') {
        cout << "Enter 1st Operand: ";
        cin >> num1;
        cout << "Enter 2nd Operand: ";
        cin >> num2;
        cout << "Enter Operator(+,-,/,*): ";
        cin >> op;
        switch(op) {
        case '+':
            cout <<num1<< '+'<<num2<<'='<<num1+num2 << endl;
            break;
        case '-':
            cout <<num1<< '-'<<num2<<'='<<num1-num2 << endl;
            break;
        case '*':
            cout <<num1<< '*'<<num2<<'='<<num1*num2 << endl;
            break;
        case '/':
            if(num2==0)cout << "Division by Zero not possible" << endl;
            else cout <<num1<< '/'<<num2<<'='<<num1/num2 << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
            break;
        }
        cout << "Do you want to perform another calculation[Y/N][y/n]:" << endl;
        cin >> choice;
    }
}