//use of realloc function
#include<stdlib.h>
#include<stdio.h>
int m,n,o,i;
void main()
{
int *arr;
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
printf(" [%d] ",*(arr+i));
}
while(1)
{
printf("\npress 1 to increase the size of array\n");
printf("press 2 to decrease the size of array\n");
int c;
printf("enter your choice");
scanf("%d",&c);
switch(c)
{
case 1:
{
printf("\nenter the size of the new array=");
scanf("%d",&m);
o=m-n;
while(n<m)
{
n++;
arr=(void*)realloc(arr,n*sizeof(int));
}
printf("enter %d more element for the array=",o);
for(i=o+1;i<n;i++)
{
scanf("%d",(arr+i));
}
}
break;
case 2:
{
printf("\nenter the size of the new array=");
scanf("%d",&m);
o=n-m;
while(m<n)
{
n--;
arr=(void*)realloc(arr,n*sizeof(int));
}
}
break;
default:
printf("wrong choice");
}}
printf("array elements are=");
for(i=0;i<n;i++)
{
printf(" [%d] ",*(arr+i));
}
}

