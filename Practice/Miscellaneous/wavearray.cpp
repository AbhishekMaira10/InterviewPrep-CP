#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, t, temp, n, count = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[n];
		for (i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (i = 0; i < n - 1; i += 2)
		{
			if (a[i] < a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
