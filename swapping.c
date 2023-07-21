#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};int rev[5]; int i;
	printf("The array is:");
	for(i=1;i<=5;i++)
	{
	  	printf("%d",arr[i]);	
	}
	for(i=5;i>=1;i--)
	{
		scanf("%d",&rev[i]);
	}
	printf("The reversed array is:%d",rev[i]);
}
