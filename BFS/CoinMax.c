#include <stdio.h>
#define max(a,b) ((a)>(b)?a:b)
int CoinMax(){

    /*
    input:c1,c2...cn
    output:max of sum of ci in ci-cn where ci cant be neighbor with cj which also constitute the sum
    */

    int n;
    scanf("%d",&n);

    int *coin=malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
    scanf("%d",&coin[i]);
    }
    int *F=malloc((n+1)*sizeof(int));
    memset(F,0,sizeof(F));

    F[1]=coin[0];
    for(i=2;i<=n;i++){
    printf("F[i-1]:F[%d]=%d\n",i-1,F[i-1]);
    printf("F[i-2]:F[%d]=%d\n",i-2,F[i-2]);
    printf("coin[i]:F[%d]=%d\n",i,coin[i-1]);
    F[i]=max(F[i-1],F[i-2]+coin[i-1]);
    printf("F[i]=F[%d]=%d\n",i,F[i]);
    printf("****************************************\n");
    }

    printf("%d",F[n]);
    return F[n];

}
