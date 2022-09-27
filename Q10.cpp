#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];

    public:
        void accept1();
        void accept2();
        void display1();
        void display2();
        void operator+(Matrix x);  //overload '+' unary operator

};
void Matrix::accept1()   //Accepting values from the user
{
    cout<<"\n Enter First Matrix Element (3X3) : \n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::accept2()   //Accepting values from the user
{
    cout<<"\n Enter Second Matrix Element (3X3) : \n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::display1()
{
    cout<<"\n First Matrix is : \n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::display2()
{
    cout<<"\n Second Matrix is : \n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::operator+(Matrix x)
{
    int mat[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            mat[i][j]=a[i][j]+x.a[i][j];
        }
    }
    cout<<"\n Addition of Matrix : \n\n";
    for(int i=0; i<3; i++)
    {
        cout<<" ";
        for(int j=0; j<3; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int main()
{
    Matrix m1,m2,m3;
    m1.accept1();
    m2.accept2();
    m1.display1();
    m2.display2();
    m1+m2;
    return 0;
}

