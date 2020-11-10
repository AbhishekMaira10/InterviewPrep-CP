#include <iostream> 

using namespace std;

int main(){

    char a[4][24];

    int i,j,k;

    for(i=0;i<4;i++)

    {

        for (j=1;j<25;j++)

        {

            if((j%4==0)&&(((j/4)%2)!=0))

            {

                a[i][(j-1)-i]='/';

                a[i][j+i]='\\';

        

            }

            else a[i][j]=' ';

        }

    }

    

    for(i=0;i<4;i++)

    {

        for(j=0;j<24;j++)

        {

            cout<<a[i][j];

        
	}
	cout<<'\n';

    }
}
