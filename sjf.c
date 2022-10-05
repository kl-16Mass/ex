#include<stdio.h>
#define max 20

void main()
{
    int n,i,j,bt[max],tat[max],wt[max],p[max],pos,temp;
    
    printf("Enter the number of process:");
    scanf("%d",&n);
    
    printf("Enter the Burst time for each:");

    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
       p[i]=i+1;
    }
    printf("\nProcess\tBurst time\t Waiting time\tTurnarround time");
for(i=0;i<n;i++)
{
  pos=i;
  
  for(j=i+1;j<n;j++)
  {
    if(bt[j]<bt[pos])
    {
        pos=j;
    }
  }
  temp=bt[i];
  bt[i]= bt[pos];
  bt[pos]=temp;

    temp= p[i];
    p[i]=p[pos];
    p[pos]=temp;
   
}
 for ( i = 0; i <n; i++)
    {
        wt[i]=0;
        tat[i]=0;
        for ( j = 0; j < i; j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        
        
      printf("\n%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
}