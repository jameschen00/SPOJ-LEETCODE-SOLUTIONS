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
#include<ctype.h>
#include<boost/lexical_cast.h>
using namespace std;

int main()
	{
		char arr[100];
		cout<<"Enter no. to be inverted:";
		gets(arr);
		if(arr[0]=='-')
		{
			char c='-';
			arr[0]=[];
			strrev(arr);
		}
		else
		{
			strrev(arr);
		}
		string (arr);
		int n=boost::lexical_cast<int>(arr);
		if(n>=(1<<31)||n<=-(1<<31))
		{
			cout<<0;
		}
		else
		{
			if(c=='-')
			{
				cout<<"-"<<arr;
			}
			else
				cout<<arr;
		}
	return 0;
	}


