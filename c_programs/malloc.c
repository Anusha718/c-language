#include <stdio.h>
#include<stdlib.h>


int main(){
	int *p=malloc(sizeof(int));
	*p=10;
	printf ("value %d\n",*p);
	free(p);
    p=NULL;
	return 0;

}	
