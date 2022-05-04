/*
Nadaf Zakki Noor Mohammed
20CO40
2021-2022
*/
#include<stdio.h>
void main ()
{
	int i,j,min,temp;
	// i is for outer for loop.
	// j is for inner for loop.
	// min is for storing index of element.
	// temp is for storing number temporary.
	
	int ar[] = {5,20,90,45,10,75};
	// ar is for storing number we have to arrang in increasing order.
	
	for(i=0;i<6;i++)	// Outer for loop.
	{
		min = i;
		
		for(j=i+1;j<6;j++)
		{
			// Now we will compare all elements with element at index min.
			// If any element will be lesser than it, we will store its index
			// in min variable.
			if(ar[j]<ar[min])
			min = j;
		}
		// Now we will swap the number.
		temp = ar[i];
		ar[i] = ar[min];
		ar[min] = temp;
	}
	// Now we will print the numbers in increasing order.
 	printf("Sorted array is:\n");    
	for(i=0;i<6;i++)
	printf("%d\t",ar[i]);

}

/*
output:
Sorted array is:
5       10      20      45      75      90
*/
