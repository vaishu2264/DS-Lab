#include <stdio.h>
void main()
{
 int a[100],i,low,mid,high,n,key;
 printf("enter number of elements: ");
 scanf("%d",&n);
 printf("enter %d elements: ",n);
 for(i=0;i<n;i++)
 {
	 scanf("%d",&a[i]);
 }
 printf("enter element to search : ");
 scanf("%d",&key);
 low = 0;
 high = n-1;
 mid = (low + high) / 2;
 while(low <= high)
 { 
  if(a[mid] == key)
  {
    printf("element not found");
  }
  else if(a[mid] < key)
  {
    low = mid + 1;
  }
  else
  {
     high = mid - 1;
     mid = (low + high) / 2;
  }
 }
 if(low > high)
 {
	 printf("element not found");
 }
}

    
