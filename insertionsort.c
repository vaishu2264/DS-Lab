#include <stdio.h>
void main()
{
 int a[100],i,j,n,key;
 printf("enter size of an aray:");
 scanf("%d",&n);
 printf("enter array elements:");
 for(i=0;i<n;i++)
 {
	 scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
   key = a[i];
   j = i - 1;
   while(j >= 0 && a[j]>key)
   {
	   a[j+1] = a[j];
	   j = j - 1;
   }
   a[j+1] = key;
 }
 printf("elements after sorting are:\n");
 for(i=0;i<n;i++)
 {
	 printf("%d\n",a[i]);
 }
}
