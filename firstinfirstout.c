#include<stdio.h>
int main(){
int n;
printf("enter the number of processes:\n");
scanf("%d",&n);
int wt[n],bt[n],tat[n];
float avgwt=0,avgtat=0;
printf("enter the burst time of each process:\n");
for(int i=0;i<n;i++){
scanf("%d",&bt[i]);}
wt[0]=0;
for(int i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];}
for(int i=0;i<n;i++){
tat[i]=wt[i]+bt[i];
avgwt+=wt[i];
avgtat+=tat[i];}
printf("process\t\t waiting time\t\t burstime\t\t turnaroundtime");
for(int i=0;i<n;i++){
printf("p%d\t\t %d\t\t %d\t\t \t\t%d",i,wt[i],bt[i],tat[i]);}
printf("average turn around time:%f\n average turnaroundtime:%f\n",avgwt/n,avgtat/n);
return 0;
}

