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

       complex operator++()                     //per increment
       {
            complex temp;

            temp.real=++real;
            temp.img=++img;

            return temp;
       }
       complex operator++(int )              //post increment
       {
            complex temp;

            temp.real=real++;
            temp.img=img++;

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
    complex c1,c2,c3,c4;
    c1.setdata();
    c2.setdata();
  //  c1.getdata();
    c3=c1++;                                          //post increment
    c3.getdata();
    c4=++c2;                                          //per increment
    c4.getdata();
    return 0;
}