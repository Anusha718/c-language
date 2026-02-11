#include<stdio.h>
#include<stdlib.h>
int main(){

    int i,n=5,*p;
    p=calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    n=n+2;
    p=realloc(p,sizeof(int));
    for(i=5;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
        printf("%d",p[i]);
    free(p);
}

    
