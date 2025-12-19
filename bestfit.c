#include<stdio.h>
int main(){
int nb,np,block[10],process[10];
printf("enter the number  block :\n");
scanf("%d",&nb);
printf("enter the block sizes\n");
for(int i=0;i<nb;i++){
scanf("%d",&block[i]);}
printf("enter the no of processes\n");
scanf("%d",&np);
printf("enter the process sizes\n");
for(int i=0;i<np;i++){
scanf("%d",&process[i]);}
for(int i=0;i<np;i++){
int best=-1;
for(int j=0;j<nb;j++){
if(process[i]<=block[j]){
if(best==-1 || block[j]<block[best]){
best=j;
}}}
if(best !=-1){
printf("process %d is allocated to %d block\n",i+1,best+1);
}
else{
printf("process %d is not allocated it is too large\n");}}
return 0;}
