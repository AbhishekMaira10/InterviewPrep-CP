#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int c=0,area=1;
		scanf("%d",&n);int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",arr+i);sort(arr,arr+n);
		for(int i=n-1;i>0;i--)
		{
		//	printf("%d ",arr[i]);
			if(arr[i]==arr[i-1])
			{
		//		printf("%d %d\n",arr[i],arr[i-1]);
				area=area*arr[i];
				c++;
				i--;
			}
			if(c==2)
			break ;
		}
		//printf("c=%d\n",c);
		if(c==2)
		printf("%d\n",area);
		else
		printf("-1\n");
	}
	return 0;
}
