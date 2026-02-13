#include<stdio.h>


int main(int argc,char **argv){

    if(argc<2)
        return 0;
    
    for(int i=0;i<argc;i++){

        printf("%s\n",argv[i]);
    }


}
