#include <iostream>
using namespace std;
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	swap(&x, &y);
	cout << "x: " << x << endl << "y: " << y << endl;
}
