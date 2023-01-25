#include<stdio.h>
#include<stdlib.h>
void binarysearch(int arr[],int num, int first,int last){
        int mid;
        mid=(first+last)/2;
        if (first>last)
        {
                printf("number is not found");
        }
        else if(arr[mid]==num)
        {
                printf("element is found at position %d",mid+1);
        }
        else if(arr[mid]>num)
        {
                binarysearch(arr,num,first,mid-1);
        }
        else
        {
                binarysearch(arr,num,mid+1,last);
        }
}
int main()
{
        int arr[100],key,i,n;
        printf("enter the size of an array:");
        scanf("%d",&n);
        printf("enter the values in sorted sequence \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
                printf("enter the value to be search:");
                scanf("%d",&key);
                binarysearch(arr,key,0,n-1);
}


