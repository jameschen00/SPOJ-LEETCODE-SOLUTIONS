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
#include<climits>
using namespace std;

int main()
	{
	 int n;
	 ll c[n],x[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>c[i];
	 	x[i]=numeric_limits<ll>::min;
	 }
	 vector<ll>sum;
	 
	 for(int i=0;i<n;i++)
	 {
	 	sum[i]=c[i]*x[i];
	 }
	return 0;
	}

