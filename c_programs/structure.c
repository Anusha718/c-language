#include<stdio.h>
#include<string.h>

struct st{
    int a;
    char s[10];
};

int main(){

    struct st name;
    name.a=10;
    strcpy(name.s,"hai");
    printf("%d   %s\n",name.a,name.s);
}
