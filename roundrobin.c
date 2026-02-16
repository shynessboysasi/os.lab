#include<stdio.h>
int main(){
int n;
printf("enter the number of processes:\n");
scanf("%d",&n);
int wt[n],bt[n],tat[n],pr[n],rem[n],total=0;
int temp;
float avgwt=0,avgtat=0;

int tq;
printf("enter the timequantum:");
scanf("%d",&tq);
printf("enter the burst time of each process:\n");
for(int i=0;i<n;i++){
scanf("%d",&bt[i]);
rem[i]=bt[i];}
while(1){
int done=1;
    for(int i=0;i<n;i++){
    if(rem[i]>0){
     done=0;
        if(rem[i]>tq){
            total=total+tq;
            rem[i]=rem[i]-tq;}
        else{
            total=total+rem[i];
            wt[i]=total-bt[i];
            rem[i]=0;}}}
    if(done==1){
    break;}}        
            
                       
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

