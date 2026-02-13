#include<stdio.h>

int add(int a,int b){

    return a+b;

}

int calculate(int (*fp)(int a,int b),int a,int b){
    return fp(a,b);

}

main(){
    int res;

    res=calculate(add,10,5);
    printf("%d\n",res);

}
