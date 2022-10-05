#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,sum=0,n,temp,max;

    int d[20];

    int disk;//location of head position
    int dloc;//disk location in array

    printf("\nEnter number of Locations:");
     scanf("%d",&n);

     printf("\nEnter the Head POsition:");
scanf("%d",&disk);

     printf("\nEnter the elements of disk queue:\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&d[i]);
     }
     d[n]=disk;
     n=n+1;
     for(i=0;i<n;i++)
     {
        for(j=i;j<n;j++)
        {
            if(d[i]>d[j])
            {
                temp=d[i];
                d[i]=d[j];
                d[j]=temp;
            }
        }
     }
     max = d[n];
     for(i=0;i<n;i++)
     {
        if(disk==d[i])
        {
            dloc=i;
            break;
        }
     }
     for(i=dloc;i>=0;i--)
     {
        printf("%d-->",d[i]);
     }
     printf("0-->");
     for(i=dloc+1;i<n;i++)
    {
        printf("%d-->",d[i]);

    }
    sum = disk + max;
    printf("\nMOvement of total cylinders%d",sum);
}




