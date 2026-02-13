#include<stdio.h>

static inline int add(int a,int b)
{
    return a+b;
}

int main()
{
    printf("%d",add(2,3));
}

