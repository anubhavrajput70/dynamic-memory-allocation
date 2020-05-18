//use of clloc function
#include<stdlib.h>
#include<stdio.h>
void main()
{
int i,n,*arr;
printf("enter the size of the array=");
scanf("%d",&n);
arr=(int*)calloc(n,sizeof(int));
printf("enter the element of the array=");
for(i=0;i<n;i++)
{
scanf("%d",(arr+i));
}
printf("array elements are=");
for(i=0;i<n;i++)
{
printf(" %d",*(arr+i));
}
}

