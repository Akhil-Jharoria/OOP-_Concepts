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

      /* time operator+(time c)
       {
            time temp;

            temp.hour=hour+c.hour;

            temp.minute=minute+c.minute;
            temp.second= second+c.second;
            return temp;
       }*/
    /*   void normal(time c)
       {
           minute=c.minute+c.second/60;
            second=c.second%60;
           hour=c.hour+c.minute/60;
            minute=c.minute%60;
       }*/
     void getdata()
     {
          cout<<"\nThe Time is :";
          cout<<hour <<" : "<<minute<<" : "<<second;
     }
};

int main()
{
    time t1,t2;
     time *p1,*p2;
     p1=&t1;
     p2=&t2;

     p1->setdata();
     p2->setdata();
     
     p1->getdata();
     p2->getdata();

    //c1.setdata();
    //c2.setdata();
  
    return 0;
}