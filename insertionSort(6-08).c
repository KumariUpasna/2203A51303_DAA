//Insertion sort
#include<stdio.h>
int main()
{
	int a[20],i,j,key,n,k;
		printf("Enter how many nos you want to input:");
	scanf("%d",&n);
	printf("Enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=1;k<n;k++)
	{
		key=a[k];
		j=k-1;
		while(key<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("values after Insertion sort:");
	    for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
 } 
