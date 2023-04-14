#include<stdio.h>

void main()
{
	int n=0;
	scanf("%d",&n);
	
	long data[n];
	for(auto i=0;i<n;i++)
	scanf("%ld",&data[i]);
	
	if(data[n-1]%10==0)
	printf("Yes");
	else
	printf("No");
	
}