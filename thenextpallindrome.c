#include <stdio.h>

int main(void) {
	int i,t;
	scanf("%d",&t);
	long long int arr[t];
	for (i=0;i<t;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	for(i=0;i<t;i++)
	{
		int j=arr[i],temp,rev=0;
		while(j<1000000&& j!=rev)
		{
			j++;
			temp=j;
			while(temp!=0)
			{
				rev=rev*10;
				rev=rev+temp%10;
				temp=temp/10;
			}
			if(j==rev)
			printf("%d\n",j);
			break;
	}
	}
	return 0;
}
