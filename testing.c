#include<stdio.h>
void main();
void napsak(float wt[], float pr[], float rt[],float cap,int no);

void main()
{
    int no,cap,i,j;

    printf("ente number of objects::");
    scanf("%d",&no);

    printf("ente capacity::");
    scanf("%d",&cap);

    float wt[no],pr[no],rt[no];

    for(i=0;i<no;i++)
    {
        printf("enter weight%d",i+1);
        scanf("%f",&wt[i]);
    }

    for(i=0;i<no;i++)
    {
        printf("enter profit%d",i+1);
        scanf("%f",&pr[i]);
    }

    for(i=0;i<no;i++)
    {
        rt[i] = pr[i]/wt[i];
    }

    float temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(rt[i]<rt[j])
            {
                temp = rt[i];
                rt[i] = rt[j];
                rt[j] = temp;

                temp = wt[i];
                wt[i] = wt[j];
                wt[j] = temp;

                temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;
            }
        }
    }

    napsak(wt,pr,rt,cap,no);
}

void napsak(float wt[], float pr[], float rt[],float cap,int no)
{
    
}