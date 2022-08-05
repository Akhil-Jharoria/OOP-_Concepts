/*We are given the string and we have to find the occurance of the character in the strings*/

#include<bits/stdc++.h>
#include<iostream>
//#include<stdio.h>
#include<map>
#include<String>
//#include<algorithm>
using namespace std;

int main()
{
     string str;

     map<char,int> occurance;

     cout<<"Enter the string :";
     cin>>str;
     
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
     

    return 0;
}
