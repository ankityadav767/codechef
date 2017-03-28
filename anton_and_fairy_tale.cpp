#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	
		int n,f;
		cin>>n>>f;
		int a[n];
		a[0]=n;
		a[1]=a[0]-1;
		for(int i=1;i<n;i++)
		{
		 if(a[i]<n)
		a[i]=a[i]+f;
		if(a[i]>n)  a[i]=n;
		
		a[i+1]=a[i]-(i+1);
	
		if(a[i+1]<=0)
		{
			cout<<(i+1);
			break;
			
		}
		}
return 0;		
	
}
