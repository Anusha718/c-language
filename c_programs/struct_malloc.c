#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct st{
    int a;
    char s[10];
};

int main(){
    int i;
    struct st *name;
    name=malloc(3*sizeof(struct st));
    
    for(i=0;i<3;i++)
        scanf("%d %s",&name[i].a,name[i].s);
    for(i=0;i<3;i++)
        printf("%d %s",name[i].a,name[i].s);

}
