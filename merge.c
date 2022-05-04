/*
SHAIKH MOHD RAZA MOHD RAFIQUE
20CO53
2021-2022
*/

#include<stdio.h>
#include<stdlib.h>
int n;
void MergeSort(int A[n],int low,int high);
void Display(int A[n]);
void Combine(int A[n],int low,int mid,int high);

void main()
{
    int i,low,high;
    /*
    i is for using in for loop.
    low is for storing lowest index of array.
    high is for storing highest index of array.
    */
    printf("\n\t\tMerge Sort \n");
    printf("\n Enter the length of list:");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter list element:");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    low=0;         // Lowest index of Array
    high=n-1;     // Highest index of Array
    MergeSort(A,low,high);
    Display(A);
}

void MergeSort(int A[n],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MergeSort(A,low,mid); // For Left Sub Array(LSA)
        MergeSort(A,mid+1,high);// FOr Right Sub Arrar(RSA)
        Combine(A,low,mid,high);
    }
}

void Combine(int A[n],int low,int mid,int high)
{
    int i,j,k;
    int temp[n];
    k=low;
    i=low;
    j=mid+1;
    while (i<=mid && j<=high)  //For printing lowest Value
    {
        if(A[i]<=A[j])
        {
            temp[k]=A[i];
            i++;
            k++;
        }       
        else
        {
            temp[k]=A[j];
            j++;
            k++;
        } 
    }

    while (i<=mid) 
    {              // For remaining Elemnt of LSA
        temp[k]=A[i];
        i++;
        k++;
    }

    while (j<=high)
    {            // For remaining Element of RSA
        temp[k]=A[j];
        j++;
        k++;
    }

    for(k=low;k<=high;k++)
        A[k]=temp[k];  
}

void Display(int A[n])
{
    int i;
    printf("\n\nThe Sorted Array Is...\n"); //For sorted list
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}

/*
                Merge Sort 
Enter the length of list:4
Enter list element:1
2
3
4

The Sorted Array Is...
1       2       3       4
*/

