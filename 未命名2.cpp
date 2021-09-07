#include<stdio.h>
int main()
{
	int a[10000]={0},n,min=3001,max=-3001;
	int flag=-1,l,m,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&l,&m,&k);
		for(int j=l+3000;j<k+3000;j++)
		{
			if(l<min)	min=l;
			if(k>max)	max=k;
			if(a[j]<m)  a[j]=m;
		}	
	}
	for(int i=min;i<=max;i++)
	{
		printf("%d ",a[i+3000]);
	}
	/*
	flag=a[min+3000];
	printf("%d %d ",min,a[min+3000]);
	for(int i=min;i<=max;i++)
	{
		if(a[i+3000]!=flag) 
		{
		printf("%d %d",i,a[i+3000]);
		if(i!=max) printf(" ");
		flag=a[i+3000];	
		}
	}*/
	return 0;
} 
