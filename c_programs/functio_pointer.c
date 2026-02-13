#include<stdio.h>

int (*fp)(int,int);
int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }

int main(){
    int choice;

    printf("1.Add 2.Sub\n");
    scanf("%d",&choice);

    if(choice==1)
        fp = add;
    else
        fp = sub;

    printf("Result = %d", fp(10,5));
    return 0;
}

