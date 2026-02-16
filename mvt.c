#include<stdio.h>
int main(){
int mem;
printf("enter the size of the memory:");
scanf("%d",&mem);
int n;
printf("enter the number of processes\n:");
scanf("%d",&n);
int p[n];
printf("enter the processes sizes\n");
for(int i=0;i<n;i++){
scanf("%d",&p[i]);}
for(int i=0;i<n;i++){
if(p[i]<=mem){
printf("process p%dis allocated memory\n",i);
mem=mem-p[i];
printf("available memory is %d\n",mem);
}
else{
printf("memory is not available for the current process p%d\n",i);}}
return 0;}