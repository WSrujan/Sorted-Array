#include<stdio.h>
main()
{
 int n,i,j,temp;
int a[5];
 for(i=0;i<5;i++)
 {
  printf("\n Enter element ");
  scanf("%d",&a[i]);
 }
 for(i=4;i>=0;i--)
 {
  for(j=0;j<i;j++)
  {
   if(a[j]>a[j+1])
   { 
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
   }
  }
 }
 printf("\n Sorted array is ");
 for(i=0;i<5;i++)
 {
    printf("%d ",a[i]);
 }
}
