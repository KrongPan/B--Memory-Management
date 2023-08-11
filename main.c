#include <stdio.h>
#include <stdlib.h>

int G1;
int G2;
int G3;
int G4;
int G5;

void recursive()
{
    int r;
    printf("&r : %p\n",&r);
    recursive();
}

int main()
{
    printf("&G1 : %p\n",&G1);
    printf("&G2 : %p\n",&G2);
    printf("&G3 : %p\n",&G3);
    printf("&G4 : %p\n",&G4);
    printf("&G5 : %p\n",&G5);
    int *M1 = (int *)malloc(4 * sizeof(int));
    int *M2 = (int *)malloc(4 * sizeof(int));
    int *M3 = (int *)malloc(4 * sizeof(int));
    int *M4 = (int *)malloc(4 * sizeof(int));
    int *M5 = (int *)malloc(4 * sizeof(int));
    printf("M1 : %p\n",M1);
    printf("M2 : %p\n",M2);
    printf("M3 : %p\n",M3);
    printf("M4 : %p\n",M4);
    printf("M5 : %p\n",M5);
    printf("&M1 : %p\n",&M1);
    printf("&M2 : %p\n",&M2);
    printf("&M3 : %p\n",&M3);
    printf("&M4 : %p\n",&M4);
    printf("&M5 : %p\n",&M5);
    recursive();
    return 0;
}