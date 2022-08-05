#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class list
{
    private:
     struct Node
     {
         int item;
         Node *next;
     };
     Node *start;

     public:
      list()
      {
          start=NULL;
      }

      void add_item(int);
      void delete_firstitem();
      void showallitem();

      ~list()
      {
          while(start)
          {
              delete_firstitem();
          }
      }
};

void list::add_item(int data)
{
    Node *t,*n;
    n = new Node;
    n->item=data;
    n->next=NULL;

    if(start==NULL)
    {
        start=n;
    }
    else
     {
         t=start;
         while(t->next!=NULL)
         {
             t=t->next;

         }
         t->next=n;
     }
}

void list::delete_firstitem()
{
    Node *r;

    if(start!=NULL)
    {
        r=start;
        start=start->next;
        delete r;
    }
}

void list::showallitem()
{
    Node  *t;
    if(start!=NULL)
    {
        t=start;
        while(t!=NULL)
        {
            cout<<" "<<t->item;
            t=t->next;
        }
    }

    getch();
}

int menu()
{
    int choise;
    system("cls");
    cout<<"\n1.Add Item.";
    cout<<"\n2.Delete First Item :";
    cout<<"\n3.View All Item.";
    cout<<"\n4.Exit";
    cout<<"\nEnter Your Choise :";
    cin>>choise;

    return choise;
}

int main()
{
    list mylist;
    int data;

    while(true)
    {
        switch(menu())
        {
            case 1:
               cout<<"\nEnter the Item to add :";
               cin>>data;
               mylist.add_item(data);
               break;

            case 2:
              mylist.delete_firstitem();
              break;

            case 3:
              mylist.showallitem();
              break;

            case 4:
               exit(0);
               break;

            default:
             cout<<"\nInvalid Choise.";
        }
    }

    return 0;
}