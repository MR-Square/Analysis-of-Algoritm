/*
NAME : SHAIKH MOHD RAZA MOHD RAFIQUE.
ROLL : 20CO53
YEAR : 2021-22
*/

//  PROGRAM FOR SOLVING PROBLEMS OF FRACTIONAL KNAPSACK.
#include<stdio.h>
void main();
void knapsak(float ob[],float pr[],float rt[],int cap,int no);

void main ()
{
    int no;
    // no is for storing number of objects user want to take.
    
    printf("Enter the number of object:");
    scanf("%d",&no);

    float ob[no],pr[no];
    // ob is for storing weight of objects.
    // pr  is for storing profit of objects.

    // Now we will take weight of objects from user.
    for (int i = 0; i < no; i++)
    {
        printf("Enter weight of object%d:",i+1);
        scanf("%f",&ob[i]);
    }
    
    // Now we will take profits of objects from user.
    for (int i = 0; i < no; i++)
    {
        printf("Enter profit of object%d:",i+1);
        scanf("%f",&pr[i]);
    }

    int m;
    // m is for storing capacity of container.

    // Taking capacity of container.
    printf("Enter capacity:");
    scanf("%d",&m);


    // To compare the objects first we will find out the profit per weight of object.
    // Then we will select the object first which has greater profit per weight ratio.
    float rt[no];
    // rt is for storing ratio of profit by weight of object.

    // Finding ration of profit per weight of all objects.
    for (int i = 0; i < no; i++)
        rt[i] = pr[i]/ob[i];

    
    
    // Arranging ratios in decreasing order.
    float temp=0.0;
     for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(rt[i]<rt[j])
            {
                temp=rt[i];
                rt[i]=rt[j];
                rt[j]=temp;

                // Changing the position of weights of objects with respect to position of their ratio.
                temp=ob[i];
                ob[i]=ob[j];
                ob[j]=temp;

                // Changing the position of profits of objects with respect to position of their ratio.
                temp=pr[i];
                pr[i]=pr[j];
                pr[j]=temp;

                
            }
        }
    }

    // Now let's print the ratio in decreasing order.
    printf("Ratios in decreasing order.\n");
    for (int i = 0; i < no; i++)
    printf("%.2f\t",rt[i]);
    
    printf("\nweights\n");
    for (int i = 0; i < no; i++)
    printf("%.2f\t",ob[i]);

    printf("\nProfits.\n");
    for (int i = 0; i < no; i++)
    printf("%.2f\t",pr[i]);
    
    // Now we will call our knapsak function.
    knapsak(ob,pr,rt,m,no);
    
}

void knapsak(float ob[],float pr[],float rt[],int cap,int no)
{
    int i; // for using in for loop.
    float container[no];
    // container[no] is for storing that how much amount of weight of an object we are taking.
    // 1 means we are taking complete object and 0 menas we are not taking that object.
    
    // First we are taking all the values of container as zero.Means there is nothing in the container.
    for(i = 0;i<no;i++)
    container[i] = 0.0;

    float tp=0.0;
    // tp is for storing total maximum profit.

    /* 
    Now we will check that if the weight of object is less than the capacity then we will put that object 
    completely in the container.
    */
    for(i=0;i<no;i++)
    {
        if(ob[i]>cap)
        break;

        else
        {
            cap=cap-ob[i];
            tp=tp+pr[i];
            container[i]=1;
        }
    }

    // Now we will add the fraction of weight to complete the capacity of container.
    if(i<no)
    {
        container[i]=cap/ob[i];
        tp=tp+pr[i]*container[i];
    }
    
    // Now we will print that how much amount of weight we have taken.
    printf("\nThe ratios of weight we have taken are \n");
    for(i=0;i<no;i++)
    printf("%.2f\t",container[i]);

    printf("\nThe total profit is %.2f", tp);
 
}


/*
CONCLUSION:
        fractional kanpsak problem is based on greedy method in which our constraint is a fix amount of weight
        and objective is to get 'maimum profit' from chosen weights.
*/