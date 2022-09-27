#include<iostream>
using namespace std;
class person
{
    int age;
    int rank;
public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    person(int a, int r)
    {
        age=a;
        rank=r;
    }
    person(const person &p)  //infinite calling ki wajah se & lagaya h
    {
        age=p.age;
        rank=p.rank;
    }
    person()
    {

    }
    person operator+(person p)
    {
        person temp;
        temp.age=age+p.age;
        temp.rank=rank+p.rank;
        return temp;
    }
    person operator++()   //pre increment
    {
        cout<<"###########pre increment called ########"<<endl;
        person temp;
       temp.rank=++rank;
       temp.age=++age;
       return temp;
    }
    void display()
    {
        cout<<"person age "<<age<<" "<<rank<<endl;
    }
    person operator++(int useless)  //post increment
    {
        cout<<"######post increment called #######"<<endl;
          person temp;
       temp.rank=rank++;
       temp.age=age++;
       return temp;
    }
    person operator--()   //pre decrement
    {
        cout<<"#######pre decrement called ########"<<endl;
        person temp;
       temp.rank=--rank;
       temp.age=--age;
       return temp;
    }
    person operator--(int)   //post decrement
    {
        cout<<"#####post decrement called #######"<<endl;
        person temp;
       temp.rank=rank--;
       temp.age=age--;
       return temp;
    }

};
int main()
{
    person p1(20,23);
    person p2=p1;
    person p3=p1+p2;

    (++p3).display();
    (p3++).display();
     p3.display();

    (--p3).display();
    (p3--).display();
     p3.display();
    cout<<endl;
    cout<<"First "<<p1.getAge()<<" "<<p1.getRank()<<endl;
    cout<<"second "<<p2.getAge()<<endl;
    cout<<"third "<<p3.getAge()<<" "<<p3.getRank()<<endl;

    return 0;
}
