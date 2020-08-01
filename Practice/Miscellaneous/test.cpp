#include <iostream>
using namespace std;
class Convert
{	public :
		int i;
		void increment(Convert &obj)
		{    obj.i=obj.i*2;
		      cout << "Value of i in member function : " << obj.i;
		}
};
int main ()
{	Convert obj1;
	obj1.i=3;	obj1.increment(obj1);
	cout << "\nValue of i in main : " << obj1.i << "\n";
	return 0;	}

