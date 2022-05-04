/*
 SHAIKH MOHD RAZA MOHD RAFIQUE
 Roll No-20CO53
 2021-2022
*/

#include<stdio.h>
#include<string.h>

int max(int a,int b);
int lcs(char *X,char *Y,int m,int n)
{
    int l[m+1][n+1];
    int i,j;
    for (i=0;i<=m;i++)
    {
        for (j=0;j<=n;j++)
        {
            if (i==0 || j==0)
            l[i][j]=0;

            else if (X[i-1]==Y[j-1])
            l[i][j]=l[i-1][j-1]+1;

            else
            l[i][j]=max(l[i-1][j],l[i][j-1]);
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

int main()
{
char X[50],Y[50];
printf("enter string 1:");
scanf("%s",X);
printf("enter string 2:");
scanf("%s",Y);
int m=strlen(X);
int n=strlen(Y);
printf("Lngth of LCS is %d\n",lcs(X,Y,m,n));
return 0;

}
/*
output:
enter string 1ZAKKI
enter string 2NADAF
Lngth of LCS is 1
*/
