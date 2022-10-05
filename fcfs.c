#include <stdio.h>
#define max 20
void main()
{
    int i, j, n, bt[max], wt[max], tat[max];
    float awt=0,atat=0;

    printf("Enter the number of prcesses:");
    scanf("%d", &n);

    printf("Enter the Burst time for each:");

    for (i = 0; i < n; i++)
    {
        printf("P[%d]",i);
        scanf("%d",&bt[i]);

    }
    printf("\nProcess\tBurst time\t Waiting time\tTurnarround time");
    for ( i = 0; i <n; i++)
    {
        wt[i]=0;
        tat[i]=0;
        for ( j = 0; j < i; j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt+=wt[i];
        atat +=tat[i];
      printf("\n%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);

    }
}   
