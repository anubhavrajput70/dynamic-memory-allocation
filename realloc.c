#include<stdlib.h>
#include<stdio.h>
void main()
{
int i,n,*arr,m,o;
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
printf("\nenter the size of the new array=");
scanf("%d",&m);
o=m-n;
while(n<m)
{
n++;
arr=(void*)realloc(arr,n*sizeof(int));
}
printf("enter %d more element for the array=",o);
for(i=o-1;i<n;i++)
{
scanf("%d",(arr+i));
}
printf("array elements are=");
for(i=0;i<n;i++)
{
printf(" [%d] ",*(arr+i));
}
}

