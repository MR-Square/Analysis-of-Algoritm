#include<stdio.h>
#include<string.h>

int LCS(char A[],char B[],int m,int n);
void main();
int max(int a,int b);
void main ()
{
	char A[100],B[100];
	printf("Enter string 1::");
	scanf("%s",A);
	printf("Enter string 2::");
	scanf("%s",B);
	int m = strlen(A),n = strlen(B);
	int length = LCS(A,B,m,n);
	printf("Size of LCS is %d",length);
	
}

int LCS(char A[],char B[],int m,int n)
{
	int l[m][n];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
				l[i][j] = 0;
			else if(A[i-1]==B[j-1])
				l[i][j] = 1+l[i-1][j-1];
			else
				l[i][j] = max(l[i][j-1],l[i-1][j]);
		}
	}
	

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%d\t",l[i][j]);
		}
		printf("\n");
	}
	printf("l[m][n] = %d\n",l[m][n]);
	return l[m][n];
}

int max(int a,int b)
{
return(a>b)? a:b;
}



