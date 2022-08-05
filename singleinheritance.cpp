#include<iostream>
#include<conio.h>

using namespace std;

class complex
{
    private:
     int a,b;
    public:
     int c;
     void setdata(int x,int y)
     {
         a=x;b=y;
     }
     void getdata()
     {
         cout<<"A = "<<a<<" B = "<<b<<endl;
     }
};

class complex2: public complex
{
     private:
      int d,e;
    public:

    void setdata()
    {
        d=24;
        e=12;
    }
    void getdata()
    {
        cout<<"\nD= "<<d<<" E = "<<e;
    }
};

int main()
{
     complex2 c1;

     c1.setdata();
     c1.getdata();

     complex d1;
     d1.setdata(4,8);
     d1.getdata();

}