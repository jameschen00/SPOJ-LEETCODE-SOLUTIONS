#define ll long long int
#define pp pair<ll,ll>
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;
void search(char txt[],char pat[])
{
	int i,j;
	int n=strlen(pat);
	int m=strlen(txt);
	int Z[n];
	int R=0,L=0;
	for(i=0;i<n;i++)
	{
		if(i>R)
		{
			L=R;L=i;R=i;
			while(R<n && txt[R-L]==txt[R])
			{
				R++;
			}
		Z[i]=R-L;
		R--;
		}
		else
		{
			int K=i-L;
			if(Z[K]<R-i+1)
			{
				Z[i]=Z[K];
			}
			else
			{
				L=i;
				while(R<n && txt[R-L]==txt[R])
					R++;
				Z[i]=R-L;
			}
			R--;
		}
	}
	int c=0;
	for(i=0;i<n;i++)
	{
		if(Z[i]==m)
			c++;
	}
	cout<<"No. of times the pattern was found in the string:"<<c<<endl;
	
}
int main()
	{
		 char txt[]="abcxabcabzabc";
		 char pat[]="abc";
		 search(txt,pat);
	return 0;
	}

