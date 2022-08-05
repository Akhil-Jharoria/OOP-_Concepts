#include<conio.h>
#include<iostream>

using namespace std;

class complex
{
     private:
      int real,img;
     public:
      void setdata()
       {
           cout<<"\nEnter the Real Number : ";
           cin>>real;
           cout<<"\nEnter the Imagenery Number : ";
           cin>>img;
       }

       complex operator+(complex c)
       {
            complex temp;

            temp.real=real+c.real;
            temp.img=img+c.img;

            return temp;
       }
     void getdata()
     {
          cout<<"\nThe Complex Number is :";
          cout<<real <<" + "<<img;
     }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata();
    c2.setdata();
  //  c1.getdata();
    c3=c1+c2;
    c3.getdata();
    return 0;
}