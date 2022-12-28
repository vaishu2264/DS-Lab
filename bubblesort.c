#include <stdio.h>
void main()
{
 int a[100],i,j,n,temp;
 printf("enter size of an aray:");
 scanf("%d",&n);
 printf("enter array elements:");
 for(i=0;i<n;i++)
 {
	 scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if((a[j] > a[j + 1]))
   {
       temp = a[j];
       a[j] = a[j+1];
       a[j+1] = temp;
   }
  }
 }
 printf("elements after sorting are:\n");
 for(i=0;i<n;i++)
 {
	 printf("%d\n",a[i]);
 }
}

