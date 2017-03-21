#include<iostream>
using namespace std;
int main()
{
   int t;
   int l,c;
   cin>>t;
   while(t--){  
    cin>>l>>c;
for(int i=0;i<l;i++)
	{
for(int j=0;j<c;j++)
	 {
if(i>0&& j>0 && l>2 && c>2 && i<l-1 && j<c-1)
       cout<<".";
      else
       cout<<"*"; 
     }
     cout<<endl;
	 } 
	 cout<<endl;
	 }
   return 0;}
