#include<iostream>
using namespace std;
class mystring
{
    private:
        char str[500];

    public:
        void operator!();  //overload '!' operator
        void accept_string()
        {
            cout<<"\n Enter String  :  ";
            cin>>str;
        }
        void display_string()
        {
            cout<<str;
        }
};
void mystring:: operator!()
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"\n\n Reverse Case String is  :  "<<str;
}
int main()
{
    mystring s1;
    s1.accept_string();
    cout<<"\n\n String is  :  ";
    s1.display_string();
    !s1;
    return 0;
}
