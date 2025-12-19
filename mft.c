#include<stdio.h>
int main(){
int mems,nofpart,memprosiz[10],partsiz;
printf("enter the memory:\n");
scanf("%d",&mems);
printf("enter the partision size:\n");
scanf("%d",&partsiz);
nofpart=mems/partsiz;
printf("number of processes:%d\n",nofpart);
for(int i=0;i<nofpart;i++){
printf("enter the size of process:%d\n",i+1);
scanf("%d",&memprosiz[i]);}
for(int i=0;i<nofpart;i++){
if(memprosiz[i]<=partsiz){
printf("process %d is allocated to partition %d \n",i+1,i+1);
printf("fragmentation is :%d",partsiz-memprosiz[i]);}
else{
printf("process %d is failed to allocated to partition size because it is too large\n",i+1);
}
printf("\n");}
return 0;}