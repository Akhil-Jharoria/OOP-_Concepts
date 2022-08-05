#include<iostream>
#include<conio.h>
#include<string.h>
 using namespace std;

class person
{
     private:
     int age;
     char name[10];
     char gender;
    public:

     person(char *n,char g,int a)
     {
         strcmp(name,n); 
         gender=g;
         age=a;
     }
     ~person()
     {

     }
     void setdata(char *y,char z,int x)
     {
        strcmp(name,y);
        gender=z;
        age=x;

     }
      void getdata()
      {
          cout<<"Name is ="<<name<<"\n";
          cout<<"Gender is ="<<gender<<"\n";
          cout<<"Age is = "<<age;
      }
};
  
int main()
{
    // cout<<"\nBefore calling the constructor :";
 //   clrscr();
      
    person p1("akhil",'M',8);         //p2,p3;
    cout<<"\nAfter the constructor is call :";
    p1.getdata();

    return 0;
}