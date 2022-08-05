/*We are given the string and we have to reverse the sentance not the word*/
//  "India is my pride"========="pride my is india".

#include<bits/stdc++.h>
#include<iostream>
#include<String>
#include<stack>

using namespace std;

int main()
{
     string str[5],str1[5];
     stack<string>  rev;

     cout<<"Enter the string is :";
     for(int i=0;i<5;i++)
     cin>>str[i];

    for(int i=0;i<5;i++)
     rev.push(str[i]);
int i=0;
   while(!rev.empty())
   {
      string re =  rev.top();
      rev.pop();
      str[i]=re;
      i++;
   }

   for(int i=0;i<5;i++)
     cout<<str[i]<<" ";

  /*   
     for(int i=0;i<str.length();i++)
     {
        char ch=str[i];
        occurance[ch]++;
     }

cout<<"Number of Occarance of the Character in the String are "<<endl;
     for(auto i: occurance)
    {
        cout<<i.first<<" ---- "<<i.second<<endl;
    }
     */

return 0;
}