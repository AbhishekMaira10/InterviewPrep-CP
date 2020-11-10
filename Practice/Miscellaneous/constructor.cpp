// Cpp program to illustrate the 
// concept of Constructors
#include <iostream>
using namespace std;
 
class construct
{ 
public: 
    int a, b;
};
 
int main()
{
    construct c;
    cout << "a: "<< c.a << endl << "b: "<< c.b;
    return 0;
}
