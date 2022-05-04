#include <stdio.h>

int Binser();

void main()
{
    int key,n,i,pos;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched");    
    scanf("%d",&key);
    
    pos=Binser(arr,0,n-1,key);

    if(pos==-1)
    {
        printf("Key element not found");
    }
    else
    {
        printf("Key element found at pos %d",pos);
    }
}

int Binser(int a[],int l,int h,int key)
{
    int mid=(l+h)/2;
    if(l<=h)
    {
    
   
    if(a[mid]==key)
    {
        return mid;
    }

    else if(key<a[mid])
    {
        Binser(a,l,mid-1,key);
        
    }

    else
    {
        Binser(a,mid+1,h,key);
    }

    }

    else
    {
    return -1;
    }
}



