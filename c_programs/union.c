#include<stdio.h>
union test
{
    int a;
    float b;
    char c;
};
int main()
{
    union test u;

    u.a=10;
    printf("a=%d\n",u.a);

    u.b=5.5;
    printf("b=%.2f\n",u.b);

    u.c='A';
    printf("c=%c\n",u.c);
}

