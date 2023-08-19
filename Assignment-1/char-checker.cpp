#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter input: ";
    cin >> x;
    if ((x > 32 && x < 48) || (x > 57 && x < 65) || (x > 90 && x < 97) || (x > 122 && x < 127))
    {
        cout << "This is a special character." << endl;
    }
    else if (x > 47 && x < 58)
    {
        cout << "This is a number." << endl;
    }
    else if ((x > 64 && x < 91) || (x > 96 && x < 123))
    {
        cout << "This is a letter." << endl;
    }

}