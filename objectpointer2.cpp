#include<conio.h>
#include<iostream>

using namespace std;

class time
{
     private:
      int hour,minute,second;
     public:
      void setdata(int h,int m,int s)
       {
            this->hour=h;
            this->minute=m;
            this->second=s;
       }

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

    t1.setdata(5,42,33);
    t1.getdata();
      
    return 0;
}