#include<stdio.h>

int main()

{
    int n,bt[100],wt[100],tat[100],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes(maximum 100):");
    scanf("%d",&n);

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter Process Burst Time P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }

    wt[0]=0;

    for(i=1; i<n; i++)
    {
        wt[i]=0;
        for(j=0; j<i; j++)
            wt[i]+=bt[j];
    }

    printf("\nProcess \tBurst Time \tWaiting Time");

    for(i=0; i<n; i++)
    {
        //tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\n P[%d] \t\t %d \t\t %d \n",i+1,bt[i],wt[i]);
    }

    //avwt/=n;
    //avtat/=i;
    printf("\nAverage Waiting Time:%d",avwt/n);
    //printf("\nAverage Turnaround Time:%d",avtat);

    return 0;
}
