#include <stdio.h>
void main()
{
int a[10],n,i,sum=0;
float avg;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
avg=sum/n;
printf("sum of elements in the array is %d",sum);
printf("average of elements in the array is %f",avg);
}