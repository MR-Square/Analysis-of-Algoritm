/*
SHAIKH MOHD RAZA MOHD RAFIQUE
20CO53
2021-2022
*/
#include<stdio.h>
void main ()
{
    int k,j,key;
    int ar[] ={30,20,50,90,100,5};
    for(k=1;k<6;k++)
    {
        key = ar[k]; //Taking key element.
        
        // Now we will compare key element with its left side element.
        // If it that element will be bigger than key element we will shift 
        // that element right side(we will increment its index by one.)
        
	for(j=k-1;ar[j]>key;j--)
	ar[j+1]=ar[j];
		
	// After comparing and shifting,As condition fail at j so j+1 
	// index will be empty.so at index j+1 we will store the key element.
	 ar[j+1]=key;
        
    }
    
    // Now we will print the numbers in increasing order.
    printf("Sorted array is:\n");    
    for(k=0;k<6;k++)
    printf("%d\t",ar[k]);

}
/*
Sorted array is:
5       20      30      50      90      100
*/
