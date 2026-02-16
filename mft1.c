#include<stdio.h>
int main(){
int tmem;
printf("enter the total memory");
scanf("%d",&tmem);
int spart;
printf("enter the partition size\n");
scanf("%d",&spart);
int npart=tmem/spart;
printf("\npartitions:%d\n",npart);
int process[npart];
for(int i=0;i<npart;i++){
printf("enter the size of p%d:",i);
scanf("%d",&process[i]);}
for(int i=0;i<npart;i++){
if(process[i]<=spart){
printf("Memory is allocated to p%d and fragmentation is%d\n",i,spart-process[i]);}
else{
  printf("Failed to allocated the memory to process p%d Because the process size>partition size\n",i);
  }}
  return 0;
  }
