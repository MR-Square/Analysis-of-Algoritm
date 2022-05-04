/*
AOA - Exp02.
SHAIKH MOHD RAZA MOHD RAFIQUE
20C053
2021-22 
Aim:- To Implement binary search using divide and 
conquer technique and analyze it's time complexity.

Theory:- Binary search is the search technique that works efficiently
on sorted lists. Hence, to search an element into some list 
using
the binary search technique, we must ensure that the list is 
sorted.
Binary search follows the divide and conquer approach in which 
the list
is divided into two halves, and the item is compared with the 
middle element 
of the list. If the match is found then, the location of the 
middle element is returned. 
Otherwise, we search into either of the halves depending upon 
the result produced through the match

Time complexity for Binary Search

->Best case
For base case, The element is found in the middle and hence only one 
comparison is required.
T(n)= 1
The best case time complexity is Ω (1)

-> Average case
The time complexity question for average case is
T(n)=1+log(n)
Hence, O(log(n))

->worst case
T(n)=t(n/2)+1 
let n=2k
T(2k)=t(2k/2)+1
T(2k)=t(2k-1)+1
For 2k-1
T(2k-1)=t(2k-1-1)+1+1
For 2k-1-1
T(2k-1-1)=t(2k-1-1-1)+1+1+1
And so on until Kth term
Hence, n =2k
Taking log on both sides
Log n = log(2k)
K=log(n)/log(2)
K=log(n)
T(n)= log(n)+1
The worst case time complexity is O(log(n))


*/
#include<stdio.h>
void main();
int BinSearch();
void main()
{
    int i,key,n,pos;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the  elements: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    // pos = -1;
    pos=BinSearch(arr,0,n-1,key,n);
    
    if(pos==-1)
    printf("Key element not present");
    else
    printf("Key element is present at %d",pos);
}
int BinSearch(int arr[],int l,int h,int key,int n)
{
    int m;
    m=(l+h)/2;
    if(key==arr[m])
    return m;
    else if(key<arr[m])
    BinSearch(arr,l,m-1,key,n);
    else 
    BinSearch(arr,m+1,h,key,n);
}


/*
Conclution:In this program we have implemented binary search using divide and conquer technique
But it has one exception that the array should be sorted

OUTPUT: Enter the array size: 5
        Enter the  elements: 3
        Enter the  elements: 4
        Enter the  elements: 5
        Enter the  elements: 6
        Enter the  elements: 7
        Enter the key element5
        Key element is present at 2

*/


