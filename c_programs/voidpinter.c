#include<stdio.h>

int main(){

    int a=10;
    float c=20.0;

    void *p,*q;

    p=&a;
    q=&c;

    printf("%d\n",*(int *)p);
    printf("%f\n",*(float *)q);

}


