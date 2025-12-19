#include<stdio.h>
int main(){
int wt[10],bt[10],tat[10],n,pr[10],temp;
float avgwt=0,avgtat=0;
printf("enter the no of processes:\n");
scanf("%d",&n);
printf("enter the burst time of each process and priority of each process:\n");
for(int i=0;i<n;i++){
scanf("%d %d",&bt[i],&pr[i]);}
wt[0]=0;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(pr[i]>pr[j]){
temp=pr[i];
pr[i]=pr[j];
pr[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;}
}}
for(int i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];}
for(int i=0;i<n;i++){
tat[i]=wt[i]+bt[i];}
printf("\n process  bt pri wt  tat\n");
for(int i=0;i<n;i++){
printf("\n p%d      %d  %d  %d   %d",i+1,bt[i],pr[i],wt[i],tat[i]);

}

for(int i=0;i<n;i++){
avgwt=avgwt+wt[i];
avgtat=avgtat+tat[i];}
printf("\n average waiting time:%f\n",avgwt/n);
printf("total turn around time :%f\n",avgtat/n);
return 0;
}