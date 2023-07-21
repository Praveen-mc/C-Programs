#include <stdio.h>
#define maxi 100 
int max(int x, int y) {
    return (x > y) ? x : y;
}
 
// Function to find the amount of water that can be trapped within
// a given set of bars in linear time and constant space
int trap(int heights[], int n)
{
    // maintain two pointers left and right, pointing to the leftmost and
    // rightmost index of the input array
    int left = 0, right = n - 1, water = 0;
 
    
 
int main(void)
{
    int heights[maxi];int i,size;
    printf("\nEnter the no.of bars:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    	printf("Enter the heights of the bars:");
    	scanf("%d",&heights[i]);
	}
   // int n = sizeof(heights) / sizeof(heights[0]);
 
    printf("The maximum amount of water that can be trapped is %d",
            trap(heights, size));
 
    return 0;
}
