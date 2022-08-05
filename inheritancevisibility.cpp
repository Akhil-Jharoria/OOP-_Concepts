#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class person 
{
    private:
     char name[20];
     int age;
    protected:
     void setname(char *n)
      {
       strcpy(name ,n);
      }
     void setage(int a)
      {
         age=a;
      }
     public:
      char *getname()
      {
          return name;
      }
      int getage()
      {
          return age;
      }
};

class Employee: public person
{
    private:
     int empid;
     float salary;
    protected:
     void setempid(int id)
     {
           empid=id;
     }
     void setsalary(float s)
     {
         salary=s;
     }
     int getempid()
     {
         return empid;
     }
     float getsalary()
     {
         return salary;
     }

    public:
     void setemployee(int id,char *n,int a,float s)
     {
         empid=id;
         setname(n);
         setage(a);
         salary=s;
    }
    void showemploye()
    {
        cout<<"Employe Id : "<<empid<<endl;
        cout<<"Name : "<<getname();
        cout<<"Age is : "<<getage();
        cout<<"Salary : "<<getsalary();
    }
 };

  int main()
  {
      Employee emp;

      emp.setemployee(1,"AKhil",20,40000.00f);

      emp.showemploye();

      getch();
  }