#include<stdio.h>
int main(){
int np,nb;
printf("enter the number of memory blocks and number of processes:");
scanf("%d %d",&nb,&np);
int sb[nb],sp[np],alloc[np];
printf("\n enter the block sizes:");
for(int i=0;i<nb;i++){
scanf("%d",&sb[i]);}
printf("\nenter the process sizes:");
for(int i=0;i<nb;i++){
scanf("%d",&sp[i]);
alloc[i]=-6;}
for(int i=0;i<np;i++){
   int worst =-6;
   for(int j=0;j<nb;j++){
        if(sb[j]>=sp[i]){
            if(worst==-6 || sb[j]>sb[worst]){
                  worst=j;
                  }}}
         if(worst!=-6){
            alloc[i]=worst;
            sb[worst]=sb[worst]-sp[i];}}
printf("\nprocess\t\tprocesssize\t\tallocated");
for(int i=0;i<np;i++){
if(alloc[i]!=-6){
printf("\np%d\t\t%d\t\t%d",i,sp[i],alloc[i]);}
else{
printf("\np%d\t\t%d\t\tnot allocated",i,sp[i]);}}
return 0;}

