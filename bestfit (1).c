#include<stdio.h>
int main(){
int nb,np;
printf("enter the number of blocks and n.o of processes");
scanf("%d %d",&nb,&np);
printf("\nenter the sizes of the block");
int sb[nb],sp[np],alloc[np];
for(int i=0;i<nb;i++){
scanf("%d",&sb[i]);
alloc[i]=-6;}
printf("\n enter the size of the process");
for(int i=0;i<np;i++){
scanf("%d",&sp[i]);}
for(int i=0;i<np;i++){
    for(int j=0;j<nb;j++){
         if(sb[j]>=sp[i]){
            alloc[i]=j;
            sb[j]=sb[j]-sp[i];
            break;}}}
 printf("process\t\tprocesssize\t\tblocknumber");
 for(int i=0;i<np;i++){
     if(alloc[i]!=-6){
      printf("P%d\t\t%d\t\t\t%d\n",i,sp[i],alloc[i]);}
      else{
         printf("p%d\t\t%d\t\tnot allocated",i,sp[i]);}}
         return 0;}
       