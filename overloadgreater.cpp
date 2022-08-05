#include<conio.h>
#include<iostream>

using namespace std;

class time
{
     private:
      int hour,minute,second;
     public:
      void setdata()
       {
           cout<<"\nEnter the Hour : ";
           cin>>hour;
           cout<<"\nEnter the Minute : ";
           cin>>minute;
           cout<<"\nEnter the Second :";
           cin>>second;
       }

       bool operator>(time t)
       {
            if(hour>t.hour)
             return true;
            else if(hour<t.hour)
             return false;
          else if(minute>t.minute)
            return true;
          else if(minute<t.minute)
            return false;
          else if(second>t.second)
           return true;
          else if(second<t.second)
           return false;
       }

     //  void normal(time c)
     // {
     //   minute=c.minute+c.second/60;
     //       second=c.second%60;
     //      hour=c.hour+c.minute/60;
     //       minute=c.minute%60;
          
     //  }
     void getdata()
     {
          cout<<"\nThis is greater Time :";
          cout<<hour <<" : "<<minute<<" : "<<second;
     }
};

int main()
{
    time t1,t2,t3;
    t1.setdata();
    t2.setdata();

    if(t1>t2)
      t3=t1;
    else
      t3=t2;
      t3.getdata();
    return 0;
}