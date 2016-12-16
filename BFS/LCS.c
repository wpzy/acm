#include <stdio.h>
#define max(a,b) ((a>b)?a:b)
int LCS(){
    int n;
    int m;
    scanf("%d,%d",&n,&m);

    char *s;
    char *t;
    s=malloc(n*sizeof(char));
    t=malloc(m*sizeof(char));

    scanf("%s",s);
    scanf("%s",t);
    printf("s=%s\nt=%s",s,t);
}
