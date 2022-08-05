#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class employe;
class person 
{
     private:
      char  name[20];
      int age;

    public:
     void setdata(employe obj)
     {
        //  strcmp(name,a);
        //  age=b;
     }

     void getdata()
     {
         cout<<"\nThe Name is  : "<<name<<endl;
         cout<<"\nThe Age is : "<<age;
     }
};

class employe
{
    private:
     int empid;
     float salary;
    public:
     
    friend void person :: setdata(employe obj);

     void getdata()
     {
         cout<<"\nThe Employe Id is  : "<<empid<<endl;
         cout<<"\nThe Salary is : "<<salary;
     }
};

 
 setdata(employe obj)
     {
          obj.name="Akhil";
          obj.age=46;
          obj.empid=1;
          obj.salary=4000.00f;
     }


int main()
{
   person p1;
   employe e1;

   p1.setdata(e1);
   setdata(e1);

   cout<<"\nWhen P1 call the setdata function "<<endl;
   p1.getdata();

   cout<<"\nWhen E1 call the setdata function "<<endl;
   p1.getdata();
   
    return 0;
}