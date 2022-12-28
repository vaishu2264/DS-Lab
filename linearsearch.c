#include <stdio.h>
void main()
{
 int a[100],n,i,key;
       printf("enter the number of elements: ");
       scanf("%d",&n);
       printf("enter %d numbers: ",n);
       for(i=0;i<n;i++)
       {
	       scanf("%d",&a[i]);
       }
       printf("enter element to search: ");
       scanf("%d",&key);
       for(i=0;i<n;i++)
       if((a[i] == key))
       break;
       if(i<n)
	   printf("element found at %d",i+1);
       else
           printf("element not found");
}
        

