#include<iostream>
using namespace std;
class Numbers
{
    int x;
    int y;
    int z;
public:
    void accept()
    {
        cout<<"\n Enter Three Numbers";
        cout<<"\n--------------------------";
        cout<<"\n First Number    :  ";
        cin>>x;
        cout<<"\n Second Number   :  ";
        cin>>y;
        cout<<"\n Third Number    :  ";
        cin>>z;
        cout<<"\n--------------------------";
    }
    void operator-()
    {
       x=-x;
       y=-y;
       z=-z;
    }
    void display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
};
int main()
{
    Numbers n1;
    n1.accept();
    cout<<"\n Numbers are : \n\n";
    n1.display();
    -n1;
    cout<<"\n\n Negated Numbers are :\n\n";
    n1.display();

    return 0;
}
