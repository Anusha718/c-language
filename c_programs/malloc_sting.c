#include <stdio.h>
#include <stdlib.h>

int main() {
    char *names[3];   // array of 3 string pointers

    for(int i=0;i<3;i++){
        names[i] = (char*) malloc(20 * sizeof(char));
    }

    for(int i=0;i<3;i++){
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }

    printf("\nNames:\n");
    for(int i=0;i<3;i++){
        printf("%s\n", names[i]);
    }

    for(int i=0;i<3;i++){
        free(names[i]);   // free each string
    }

    return 0;
}

