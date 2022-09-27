#include<iostream>
using namespace std;
class Complex
{
  private:
    int a;
    int b;

  public:
      void accept()
      {
          cout<<"\n Enter two complex numbers: ";
          cin>>a>>b;
      }

      void set(int r, int i)
      {
          a=r;
          b=i;
      }

      void print()
      {
         cout<<endl<<a<<" + "<<b;
      }
      Complex operator+(Complex C)      // member operator define
      {
          Complex temp;
          temp.a=a+C.a;
          temp.b=b+C.b;
          return temp;
      }
      Complex operator-()
      {
          Complex temp;
          temp.a=-a;
          temp.b=-b;
          return temp;
      }
      Complex operator*(Complex C)      // member operator define
      {
          Complex temp;
          temp.a=a*C.a;
          temp.b=b*C.b;
          return temp;
      }

};
int main()
{
    Complex c1,c2,c3,c4,c5 ;    //also write c1=Complex(3,4)
                            //copy constructor chal rha hai
    c1.set(3,4);
    c2.set(5,6);
    c3=c1+c2;     //c3=c1.operator+(c2);

    c1.print();
    c2.print();
    c3.print();
    c4=-c3;          //unary operator
    c4.print();
    c5=c1*c2;
    c5.print();

    return 0;
}
