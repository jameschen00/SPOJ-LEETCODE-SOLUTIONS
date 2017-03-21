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

using namespace std;

int main()
	{
	int arr[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	int a,b;a=0;b=0;
	for(int j=0;j<3;j++)
	{
		if(arr[0][j]>arr[1][j])
		a++;
		else if(arr[0][j]<arr[1][j])
		b++;
	}
	cout<<a<<"\t"<<b;
	return 0;
	}

