#include<stdio.h>

int main(){

    int a=10,b=20,c=30;
    int *p[3]={&a,&b,&c}; //array of pointers
    int i;

    for(i=0;i<3;i++)
        printf("%d\n",*p[i]);

    int arr[3]={1,2,3};
    int (*ptr)[3]=&arr;

    for(i=0;i<3;i++)
        printf("%d\n",(*ptr)[i]);


}
