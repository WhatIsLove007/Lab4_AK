#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{
        char op;
        float num1, num2;
        cout << "Enter operator + - ";
        cin >> op;
        cout << "Enter two operands: ";
        cin >> num1 >> num2;
        switch(op)
        {
            case '+':
                cout << num1+num2;
                break;
            case '-':
                cout << num1-num2;
                break;
            default:
                // 
                cout << "Incorect operator";
                break;
        }
        return 0;
}
