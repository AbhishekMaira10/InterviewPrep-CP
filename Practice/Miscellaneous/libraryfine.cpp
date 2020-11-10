#include<iostream>
using namespace std;
int main()
{
int fine,y1,y2,m1,m2,d1,d2;
cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(y2 == y1 || y1 < y2){
        if(m2 == m1 || m1 < m2){
            if(d2 == d1 || d1 < d2){
                fine = 0;
            }
            else
                fine = (d1 - d2) * 15;
        }
        else
            fine = (m1 - m2) * 500;
    }
    else
        fine = 10000;
        cout<<fine<<endl;
return 0;
}
