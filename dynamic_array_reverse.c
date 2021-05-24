#include<stdio.h>
void main()
{
int *a,n,i,j,m;
printf("enter the number of element in the array=");
scanf("%d", &n);
a=(int*)malloc(n*sizeof(int));
printf("enter the element of array=");
for(i=0;i<n;i++)
scanf("%d",a+i);
i=0;
j=n-1;
while(i<j)
{
m=*(a+i);
*(a+i)=*(a+j);
*(a+j)=m;
i++;
j--;
}
printf("array elements are=");
for(i=0;i<n;i++)
printf(" %d",*(a+i));
}
