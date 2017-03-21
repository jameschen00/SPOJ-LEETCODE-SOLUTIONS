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
ll reverse(ll x)
{
	
}
int main()
	{
	 ll N;
	 cin>>N;
	 for(ll i=0;i<N;i++)
	 {
	 	ll a,b;
	 	cin>>a>>b;
	 	ll rev1=0,rev2=0;
	 	while(a!=0)
	 	{
	 		rev1=rev1*10;
	 		rev1=rev1+a%10;
	 		a=a/10;
		 }
		 while(b!=0)
		 {
		 	rev2=rev2*10;
		 	rev2=rev2+b%10;
		 	b=b/10;
		 }
		 ll revsum=rev1+rev2;
		 ll sum=0;
		 while(revsum!=0)
		 {
		 	sum=sum*10;
		 	sum=sum+revsum%10;
		 	revsum=revsum/10;
		 }
		 cout<<sum;
	 }
	return 0;
	}

