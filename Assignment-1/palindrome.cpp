#include <iostream>
using namespace std;
int main()
{
    int num1, digits, num2 = 0, x = num1;
    cout << "Enter num1: ";
    cin >> num1;
    
    while (x > 0)
    {
        num2 = num2*10 + x % 10;
        x /= 10;
    }
    if (num1 == num2)
    {
        cout << "palindrome" << endl;
        return 1;
    }
    cout << "not a palindrome" << endl;
    return 0;
}
