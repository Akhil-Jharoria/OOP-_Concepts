/*Program : We are given an array which is in the sorted and we have to find the missing number*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int array[10];
    int size=10;

  vector<int> ans;

    cout<<"Enter the sorted array"<<endl;
    for(int i=0;i<10;i++)
    {
       cin>>array[i];
    }

   for(int i=0;i<10;i++)
   {
      if(array[i+1]!=array[i]+1)
      {
        int k=array[i+1];
        int l=array[i]+1;

        while(l<k)
        {
              ans.push_back(l);
              l++;
        }
        break;
      }
   }

//cout<<"size of vector"<<ans.size();
cout<<"The missing number is :"<<endl;
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
    return 0;
}