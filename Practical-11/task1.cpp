#include <iostream>
using namespace std;
class A
{
public:
  int x;
  int y;
};
class B:public A
{
public:
  void display ()
  {
    x = 10;
    y = 20;
    cout << x << "\n" << y << endl;
  }
};
int
main ()
{
  B b;
  b.display ();
  return 0;
}
