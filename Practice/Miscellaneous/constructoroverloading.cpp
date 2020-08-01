#include<iostream>
using namespace std;

class example
{
   private:
      int a,b;
   public:
      example();     //Default Constructor
      example(int, int);    //Parameterized Constructor
      example(example &); //Copy Constructor
      void display();
};

example::example()
 {
    cout<<“Constructor is called”;
  }

example::example(int x, int y)
 {
     a=x;
     b=y;
   }

example::example(example &p)
  {
      a=p.a;
      b=p.b;
    } 
  void example::display()
    {
     cout<<a<<endl<<b;
     }
int main()
{
    example e1;
    example e2(4, 5);    
    example e3(e2);   
    e3.display();
    return 0;
}

