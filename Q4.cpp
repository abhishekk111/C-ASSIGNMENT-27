#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time()
        {
            hour=minute=second=0;
        }
        friend int operator>>(istream &input, Time &t)
        {
            cout<<"\n Enter Hours    : ";
            input>>t.hour;
            cout<<"\n Enter Minutes  : ";
            input>>t.minute;
            cout<<"\n Enter seconds  : ";
            input>>t.second;
            t.minute=t.minute+t.second/60;
            t.second%=60;
            t.hour=t.hour+t.minute/60;
            t.minute%=60;
            if(t.hour>=25)
                return 1;
            else
                return 0;

        }
        friend int operator<<(ostream &output, Time &t)
        {
            output<<"\n Hours  : "<<t.hour;
            output<<"\n Minutes: "<<t.minute;
            output<<"\n Seconds: "<<t.second;
        }
        int operator==(Time t1)
        {
            int tot=hour*3600+minute*60+second;
            int tot1=t1.hour*3600+t1.minute*60+t1.second;
            if(tot=tot1)
                return 1;
            else
                return 0;
        }
        ~Time()
        {

        }

};
int main()
{
    Time t1,t2;    //default constructor
    cout<<"Enter First Time"<<endl;
    cout<<"-------------------"<<endl;
    if(cin>>t1)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"\nEnter First Time"<<endl;
    cout<<t1;
    cout<<"\n\nEnter second Time"<<endl;
    cout<<"-------------------"<<endl;
    if(cin>>t2)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<endl;
    cout<<"Second Time "<<endl;
    cout<<t2;
    if(t1==t2)
        cout<<"\n\n Times are same "<<endl;
    else
        cout<<"\n\n Times are not same "<<endl;

    return 0;
}
