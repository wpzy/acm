#include <stdio.h>
#include <stdlib.h>
#include <sys/queue.h>
#include <math.h>
#define max(a,b) ((a) > (b) ? a : b)
/*
*bag pro
*/
int *weight;
int *value;
int n;
int calculate(int i,int j);
int main()
{

scanf("%d",&n);
weight=(int*)malloc(n*sizeof(int));
value=(int*)malloc(n*sizeof(int));

int i;

printf("input weight:\n");
for(i=0;i<n;i++){
getchar();
scanf("%d",&weight[i]);
}

printf("input value:\n");
for(i=0;i<n;i++){
getchar();
scanf("%d",&value[i]);
}

int we;
printf("input we:\n");
scanf("%d",&we);
int result=calculate(0,we);
printf("result is :%d",result);
    return 0;
}



int calculate(int i,int j){
int sum;
if(i==n){
sum=0;
}else if(j>=weight[i]){
sum=max(calculate(i+1,j),calculate(i+1,j-weight[i])+value[i]);
}else{
sum=calculate(i+1,j);
}
return sum;

}
