#define pb push_back
#define mk make_pair
#define ll long long int
#define pp pair<ll,ll>
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
	{
	 ll N;
	 cin>>N;
	 for(ll i=0;i<N;i++)
	 {
	 	vector<ll>v(2);
	 	for(i=0;i<2;i++)
	 	{
	 		cin>>v[i];
		 }
	 	vector<ll>::iterator it;ll s=0,sum=0;
	 	for(it=v.begin();it!=v.end();++it)
	 	{
	 		ll c;
	 		c=*it;
	 		while(c!=0)
	 		{
			s=s*10;
	 		s=s+c%10;
	 		c=c/10;
			}
			sum=sum+s;
		}
		ll resum;
		while(sum!=0)
		{
			resum=resum*10;
			resum=resum+sum%10;
			sum=sum/10;
		}
		cout<<resum<<endl;
	 }
	return 0;
	}

