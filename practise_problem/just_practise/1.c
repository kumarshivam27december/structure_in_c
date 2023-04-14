#include <stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int prod =1;
	int arr[n];
	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(arr[i]!=n+1)
	{
		prod=prod*arr[i];
	}
	printf("%d",prod);
	
}