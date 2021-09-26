#include <iostream>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n;
		cin >> n;

		int* a = new int[n], * sum_left = new int[n], * sum_right = new int[n];
		cin >> a[0];
		sum_left[0] = 0;
		sum_right[n - 1] = 0;

		for (int i = 1; i < n; i++) {
			cin >> a[i];
			sum_left[i] = sum_left[i - 1] + a[i - 1];
		}

		for (int i = n - 2; i >= 0; i--) 
			sum_right[i] = sum_right[i + 1] + a[i + 1];

		bool find = false;
		for (int i = 0; i < n; i++) {
			if (sum_left[i] == sum_right[i]) {
				find = true;
				break;
			}
		}
		if (find)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}