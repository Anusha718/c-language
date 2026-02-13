#include<stdio.h>

int main(){

    int a;
    int *p=&a;
    int **q=&p;

    a=10;

    printf("%d %d %d\n",a,*p,**q);


}
