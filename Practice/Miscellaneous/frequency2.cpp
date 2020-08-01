#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count;
	cin>>n;
	int arr[n],freq[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		 freq[i] = -1;
	}
	     

    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {

            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }


        if(freq[i]!= 0)
        {
            freq[i] = count;
        }
    }
   int max=freq[0];
    for(i=0;i<n;i++)
    {
    	if(max<freq[i])
    	{
    		max=freq[i];
		}
    
	}
	cout<<(n-max)<<endl;
    return 0;
}
	
