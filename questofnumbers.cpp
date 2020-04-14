#include<iostream>
using namespace std;
void input(){ios_base::sync_with_stdio(false);cin.tie(NULL);}

int digSum(long long n)
{
    if (n == 0)
       return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}
int main()
{
    input();
    int q;
    cin>>q;
    while(q--)
    {
        long long int l, r;
        int n1, n2;
        cin>>l>>r>>n1>>n2;
        int arr[10] = {0};
        int l_digsum = digSum(l);
        r -= l;
        int b;
        b = r % 9;

        for(int i = 0;i <= b;i++)
        {
            /*cout<<"l_digsum + i:"<<l_digsum + i<<endl;*/
            if(l_digsum + i <= 9)
                arr[l_digsum + i] = 1;
            else
                arr[(l_digsum + i) % 9] = 1;
        }
        if(arr[n1] > arr[n2]){
            cout<<"Onkar"<<endl;
        }
        else if(arr[n1] < arr[n2]){
            cout<<"Krushna"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}
   
