#include<stdio.h>
main()
{
	int arr[50],n,i,key,loc;
	printf("Enter the size \n");
	scanf("%d",& n);
	printf(" Enter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",& arr[i]);
	}
	printf("Enter the elements to be entered ");
	scanf("%d", & key);
	printf("Enter location to be entered ");
	scanf("%d", &loc);
	for(i=n-1;i>=loc;i--)
	{
		arr[i++]=arr[i];
	}
	arr[loc]=key;
	for(i=0;i<n;i++)
	{
	printf("The elements are %d",arr[i]);
    }
}
