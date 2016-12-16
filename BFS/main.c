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
int calculate2(int i,int j);
int **dp;
extern int LCS();
extern int CoinMax();
int main()
{
CoinMax();
//LCS();
/*
scanf("%d",&n);
weight=(int*)malloc(n*sizeof(int));
value=(int*)malloc(n*sizeof(int));



dp=malloc((n+1)*sizeof(int*));

int i;
for(i=0;i<=n;i++){
    dp[i]=malloc((n+1)*sizeof(int));
}
//memset(dp,-1,sizeof(dp));
int j;



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
for(i=0;i<=n;i++){
    for(j=0;j<=we;j++){
    dp[i][j]=-1;
    }
}

int result=calculate2(n,we);
printf("result is :%d",result);
*/

    return 0;
}



int calculate(int i,int j){
if(dp[i][j]>=0){

    return dp[i][j];
}

int sum;
if(i==n){
sum=0;
}else if(j>=weight[i]){
sum=max(calculate(i+1,j),calculate(i+1,j-weight[i])+value[i]);
}else{
sum=calculate(i+1,j);
}
dp[i][j]=sum;
return dp[i][j];

}

int calculate2(int i,int j){
printf("hello world\n");
     if(dp[i][j]>=0){
        return dp[i][j];
     }

     int sum;
     if(i==0){
        sum=0;
     }else if(j<weight[i-1]){
        sum=calculate2(i-1,j);
        }else{
            sum=max(calculate2(i-1,j),calculate2(i-1,j-weight[i-1])+value[i-1]);
            }

    return dp[i][j]=sum;
}

