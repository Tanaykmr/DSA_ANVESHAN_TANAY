#include <iostream>
using namespace std;
int main()
{
    int ops;
    double a, b, result;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\nEnter the operation: ";
    cin >> ops;

    switch(ops)
    {
        case 1:
            cout << a+b << endl;
            break;
        case 2:
            cout << a-b << endl;
            break;
        case 3:
            cout << a*b << endl;
            break;
        case 4:
            result = a / b;
            cout << result << endl;
            break;    
        default:
            cout << "oops, invalid operation" << endl;
    }
    return 0;

}