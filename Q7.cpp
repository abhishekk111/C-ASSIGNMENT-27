#include<iostream>
#include<stdio.h>
using namespace std;
class fraction
{
private:
    long num,deno;

public:
    fraction(long int n=0, long int d=0)
    {
        num=n;
        deno=d;
    }
    friend void operator>>(istream &in, fraction &f)
    {
        cout<<"\n Numarator    :   ";
        in>>f.num;
        cout<<"\n denominator  :   ";
        in>>f.deno;
    }
    friend void operator<<(ostream &out, fraction &f)
    {
        out<<f.num<<"/"<<f.deno;
    }
    fraction operator++()  //pre increament
    {
        ++num;
        ++deno;
        return *this;
    }
    fraction operator++(int s)  //post inreament
    {
        fraction tmp=*this;
        num++;
        deno++;
        return tmp;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1    :  ";
    cout<<f1;
    cout<<"\n f2    :  ";
    cout<<f2;
    cout<<"\n\n Enter First Fraction Value \n";
    cin>>f1;
    cout<<"\n f1++  :  ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1  :  ";
    ++f1;
    cout<<f1;
    cout<<"\n\n Enter Second Fraction Value \n";
    cin>>f2;
    f2=++f1;
    cout<<"\n f2 = ++f1";
    cout<<"\n f1     :   ";
    cout<<f1;
    cout<<"\n f2     :   ";
    cout<<f2;
    f2=f1++;
    cout<<"\n\n f2 = f1++";
    cout<<"\n f1     :   ";
    cout<<f1;
    cout<<"\n f2     :   ";
    cout<<f2;

    return 0;
}
