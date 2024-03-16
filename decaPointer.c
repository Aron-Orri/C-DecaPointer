#include <stdio.h>
#include <stdlib.h>

int********** buildDecaPointer(int num)
{
    int* a1 = malloc(sizeof(int));
    *a1 = num;
    int** a2 = malloc(sizeof(int));
    *a2 = a1;
    int*** a3 = malloc(sizeof(int));
    *a3 = a2;
    int**** a4 = malloc(sizeof(int));
    *a4 = a3;
    int***** a5 = malloc(sizeof(int));
    *a5 = a4;
    int****** a6 = malloc(sizeof(int));
    *a6 = a5;
    int******* a7 = malloc(sizeof(int));
    *a7 = a6;
    int******** a8 = malloc(sizeof(int));
    *a8 = a7;
    int********* a9 = malloc(sizeof(int));
    *a9 = a8;
    int********** a10 = malloc(sizeof(int));
    *a10 = a9;
    return a10;
}

void freeDecaPointer(int********** num){
    free(*********num);
    free(********num);
    free(*******num);
    free(******num);
    free(*****num);
    free(****num);
    free(***num);
    free(**num);
    free(*num);
    free(num);
}

int main()
{
    int********** a = buildDecaPointer(0);
    int********** b = buildDecaPointer(1);
    int********** next = buildDecaPointer(0);
    int********** N = buildDecaPointer(40);
    int********** i = buildDecaPointer(0);
    
    printf("%i\n", **********a);
    printf("%i\n", **********b);
    for (**********i = 0; (**********i)<(**********N)-2; (**********i)++){
        **********next = (**********a) + (**********b);
        printf("%i\n", **********next);
        **********a = **********b;
        **********b = **********next;
    }
    fflush(stdout);
    
    freeDecaPointer(a);
    freeDecaPointer(b);
    freeDecaPointer(next);
    freeDecaPointer(N);
    freeDecaPointer(i);

    return 0;
}
