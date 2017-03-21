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
if(i%2==0&& j%2!=0 || i%2!=0 && j%2==0)
       cout<<".";
      else
       cout<<"*"; 
     }
     cout<<endl;
	 } 
	 cout<<endl;
	 }
   return 0;}
