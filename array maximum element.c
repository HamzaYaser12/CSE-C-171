#include<stdio.h>
int main()
{
int i, n, max;
print("Enter the Number of elements:");
scanf("&d", &n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter the element %d:\n", i+1);
scanf("%d", &arr[i]);
}
max= arr[0];
for(i=0;i<n;i++)
{
if(arr[i] > max)
{
max= arr[i];}
}
printf("The maximum element in the array is: %d\n", max);
return 0;
}
