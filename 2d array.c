/* Program to input n elements into 2d array, add and display them*/
#include<stdio.h>
int main()
{
int r, c, i, j;
printf("Enter the number of rows:");
scanf("%d", &r);
printf("Enter the number of coloumns:\n");
scanf("%d", &c);
int arr[r][c];
printf("Enter the elements for 2D array:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("Element at [%d][%d]:\n", i , j);
scanf("%d", &arr[i][j]);}}

printf("Elements in the 2D array are:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d", arr[i][j]);
}
printf("\n");
}
return 0;
}
