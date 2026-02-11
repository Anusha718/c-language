#include<stdio.h>
#include<string.h>

struct st{
    int a;
    char s[10];
};

int main(){
    int i;
    struct st name[5];

    for(i=0;i<3;i++)
        scanf("%d %s",&name[i].a,name[i].s);
    for(i=0;i<3;i++)
        printf("%d %s",name[i].a,name[i].s);

}
