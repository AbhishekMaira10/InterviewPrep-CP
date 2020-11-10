#include<iostream>
using namespace std;
int main()
{
 int a0,a1,a2,b0,b1,b2;
 cin>>a0,a1,a2,b0,b1,b2;
            int alexScore = 0;
            int bobScore = 0;
    
            if(a0 != b0)
            switch (a0 > b0)
            {
                case true:
                    alexScore++;
                    break;
                case false:
                    bobScore++;
                    break;
            }

            if(a1 != b1)
                switch (a1 > b1)
                {
                    case true:
                        alexScore++;
                        break;
                    case false:
                        bobScore++;
                        break;
                }
    
            if(a2 != b2)
            switch (a2 > b2)
            {
                case true:
                    alexScore++;
                    break;
                case false:
                    bobScore++;
                    break;
            }
            cout<<alexScore<<endl<<bobScore;
            return 0;
        }
        
        
