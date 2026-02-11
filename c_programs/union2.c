#include<stdio.h>

struct s
{
    int a;
    float b;
    char c;
};

union u
{
    int a;
    float b;
    char c;
};

int main()
{
    printf("Structure size=%ld\n",sizeof(struct s));
    printf("Union size=%ld\n",sizeof(union u));
}

