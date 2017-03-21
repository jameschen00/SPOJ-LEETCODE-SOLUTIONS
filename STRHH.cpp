#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
	{
	int t;
	cin>>t;
	char str[201];
	while(t--)
	{
			scanf("%s",str);
		int lenght=strlen(str);
		int p=lenght/2;
		for(int i=0;i<p;i=i++)
		{
			cout<<str[i];
			i++;
		}
		cout<<endl;
	}
	return 0;
	}

