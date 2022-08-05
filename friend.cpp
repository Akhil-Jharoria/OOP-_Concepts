#include<iostream>
#include<conio.h>

using namespace std;

class employe
{
     private:
     float salary;
      int age;
    public:
     void setdata(float a,int b)
     {
          salary=a;
          age=b;
     }

     void getdata()
     {
         cout<<"\nSalary Is :"<<salary;
         cout<<"\nAge is : "<<age;
     }

     friend void change(employe);
      
};
    void change(employe e)
      {
          e.salary=40000.00f;
          e.age=48;
      }

int main()
{
    employe e1;
    e1.setdata(20000.00f,52);
    e1.getdata();
    change(e1);
    e1.getdata();
}