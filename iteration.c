#include<stdio.h>
int main()
{
int a[50], size,i,j=0,biggest,secondbiggest;
printf("Enter the size of array:");
scanf("%d",&size);
printf("Enter %d element the array:",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
biggest=a[0];
for(i=1;i<size;i++)
{
if(biggest<a[i])
{
biggest=a[i];
j=i;
}
}
secondbiggest=a[size-j-1];
for(i=1;i<size;i++)
{
if(secondbiggest<a[i]&&j!=i)
secondbiggest=a[i];
}
printf("secondbiggest: %d",secondbiggest);

return 0;
}
