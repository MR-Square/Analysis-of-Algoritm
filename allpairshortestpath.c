/*Exp 7 All Pair Shortest Path

SHAIKH MOHD RAZA MOHD RAFIQUE
20CO53
2021-2022
*/
#include<stdio.h>

int min(int a,int b)
{
    // return (a<b)?a:b;
    if(a<b)
    {
        return a;
    }
    return b;
}
void Allpairshortestpath(int m[20][20],int n)
{
    int a[10][10][10],i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            a[0][i][j]=m[i][j];
        }
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a[k][i][j]=min((a[k-1][i][j]),(a[k-1][i][k]+a[k-1][k][j]));
            }
        }
    }
    for(k=0;k<=n;k++){
        printf("\nA(%d):\n",k);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d\t",a[k][i][j]);
            }
            printf("\n");
        }

    }
}

void main()
{

    int m[20][20],i,j,n;
    printf("Enter the number of vertices : \n");
    scanf("%d",&n);
    printf("Enter the matrix : \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            printf("m[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    Allpairshortestpath(m,n);
}
/*
output:
Enter the number of vertices : 
3
Enter the matrix : 
/nm[1][1]: 0       
/nm[1][2]: 4
/nm[1][3]: 11
/nm[2][1]: 6
/nm[2][2]: 0
/nm[2][3]: 2
/nm[3][1]: 3
/nm[3][2]: 20
/nm[3][3]: 0

A(0):
0       4       11
6       0       2
3       20      0

A(1):
0       4       11
6       0       2
3       7       0

A(2):
0       4       6
6       0       2
3       7       0

A(3):
0       4       6
5       0       2
3       7       0
*/