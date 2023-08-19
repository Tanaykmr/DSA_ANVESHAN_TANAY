#include <iostream>
#include <math.h>
using namespace std;

int binToDec(int bin, int digits)
{
    int ans = 0;
    for(int i = 0; i < digits; i++)
    {
        ans = ans + pow(2, i)*(bin % 10);
        bin /= 10;
    }
    return ans;
}

int main()
{
    int bin, ans = 0, x, digits;
    cout << "Enter binary: ";
    cin >> bin;

    digits = log10(bin) + 1;
    ans = binToDec(bin, digits);

    cout << ans << endl;;
}