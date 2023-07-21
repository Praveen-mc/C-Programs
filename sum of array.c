#include<stdio.h>
int main()
{
int arr[5];int i;int sum=0;
for(i=0;i<4;i++)
{
printf("Enter the list:");
scanf("%d",&arr[i]);
}
for(i=0;i<4;i++)
{
sum=sum+arr[i];
}
printf("Sum:%d",sum);
return(0);
 }
