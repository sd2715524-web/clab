#include<stdio.h>
int main(){
int n,i;
printf("enter the positive integer:");
scanf("%d",&n);
if(n<=0){
printf("please enter a positive integer greater than 0.\n");
return 1;
}
printf("\odd numbers from 1 to %d are:\n",n);
for(i=1;i<=n;i+=2){
printf("\n");	
}
printf("\n");
return 0;
}
