#include<stdio.h>
int main(){
int wt[10],bt[10],tat[10],n;
float avgwt=0,avgtat=0;
printf("enter the no of processes:\n");
scanf("%d",&n);
printf("enter the burst time of each process:\n");
for(int i=0;i<n;i++){
scanf("%d",&bt[i]);}
wt[0]=0;
for(int i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];}

for(int i=0;i<n;i++){
tat[i]=wt[i]+bt[i];
}
printf("\n process  bt  wt  tat\n");
for(int i=0;i<n;i++){
printf("\n p%d      %d  %d   %d",i,bt[i],wt[i],tat[i]);

}

for(int i=0;i<n;i++){
avgwt=avgwt+wt[i];
avgtat=avgtat+tat[i];}
printf("\n average waiting time:%f\n",avgwt/n);
printf("total turn around time :%f\n",avgtat/n);
return 0;
}