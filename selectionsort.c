#include <stdio.h>
void main()
{
 int a[10],m,n,temp,i,j;
 printf("enter size of an aray:");
 scanf("%d",&n);
 printf("enter array elements:");
 for(i=0;i<n;i++)
 {
	 scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
  m = i;
  for(j=i+1;j<n;j++)
  {
    if(a[j] > a[m])
    {
	  m = j;
    }
  }
    temp = a[i];
    a[i] = a[m];
    a[m] = temp;
  }
  printf("after sorting:");
  for(i=0;i<n;i++)
  {
	 printf("%d\n",a[i]);
  }
} 
