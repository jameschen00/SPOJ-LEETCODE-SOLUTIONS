#define d 256 //No. of characters in the input alphabet
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
	{
	int n,m;
	cout<<"ENter the size of the two strings :";
	cin>>n>>m;
	cout<<"Enter the two strings:\n";
	int i,j,p=0,t=0;char txt[n],pat[m];
	for(i=0;i<n;i++)
	{
		cin>>txt[n];
	}
	for(i=0;i<m;i++)
	{
		cin>>pat[m];
	}
	for(i=0;i<m;i++)
	{
		p=p*d+pat[i];
		t=t*d+txt[i];
	}
	for(i=0;i<=n-m;i++)
	{
		if(p==t)
		{
			for(j=0;j<m;j++)
			{
				if(txt[i+j]!=pat[j])
				break;
			}
			if(j==m)
				cout<<"Pattern occurs at"<<i<<endl;
			if(i<n-m)
			{
				t=t*d+txt[i+m]-(txt[i]*pow(d,m));
			}
		}
		
	}
	return 0;
	}

