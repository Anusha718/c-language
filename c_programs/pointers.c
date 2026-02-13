#include<stdio.h>

int main(){

    int a=10;
    int *p=&a;
    printf("%d %d\n",a,*p);  //op:10 10

    *p=20;
    printf("%d\n",a); //op:20

    int arr[3]={1,2,3};
    p=arr;
    printf("%d\n",*(p+1));   //op:2


}
