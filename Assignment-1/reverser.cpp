#include <iostream>
using namespace std;
int rev(int x)
{
	int ans = 0, step = 0;
	while (x != 0)
	{
		ans = 10*ans + (x % 10);
		x /= 10;
		cout << "This is step " << step << ", ans: " << ans << ", x: " << x << endl;
		step++;
	}
	cout << "Final value of ans is: " << ans << endl;
	return ans;
}
int main()
{
	int x, ans;
	cout << "Enter the number: ";
	cin >> x;
	ans = rev(x);
	cout << ans << endl;
}


