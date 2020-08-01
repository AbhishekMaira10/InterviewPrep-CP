#include <iostream>
using namespace std;
int main() {
	int t,n,arr[100];
	cin >> t;
	for(int i=0; i<t; i++)
	{
	    cin >> n;
	    int c=0;
	    for (int j=1; j <= n; j++)
	    {
	        cin >> arr[j];
	    }
	    for (int k=1; k <= n; k++)
	    {
	        if (arr[arr[k]] != k)
	        {
	            c++;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}

