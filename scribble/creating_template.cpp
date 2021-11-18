#include <iostream>
using namespace std;
template<typename T>
class pairr{
  T x,y;
  public:
  void setx(T x)
  {
      this->x=x;
  }
  void sety(T y)
  {
      this->y=y;
  }
  T getx()
  {
      return x;
  }
  T gety()
  {
      return y;
  }
};
int main()
{

pairr<int> p1;
p1.setx(10);
p1.sety(20);
cout<<p1.getx()<<' '<<p1.gety()<<' '<<endl;
pairr <float> p2;
p2.setx(786.19);
p2.sety(420.23);
cout<<p2.getx()<<' '<<p2.gety()<<' '<<endl;
pairr <char>p3;
p3.setx('a');
cout<<p3.getx();
    return 0;
}
