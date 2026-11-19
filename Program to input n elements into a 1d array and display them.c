/* Program to input n elements into 1d array and display them*/
#include<stdio.h>
int main()
{
int n,i;
printf("Enter N elements:");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for(i=0; i<n ;i++){
scanf("%d", &arr[i]);}
printf("Elements in the array are:\n");
for(i=0;i<n;i++)
{
printf("%d", &arr[i]);
}
printf("\n");
return 0;
}
