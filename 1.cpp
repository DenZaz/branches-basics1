#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#define N 19

int main(int argc, char *argv[])

system("CLS"); 
     int i;
     float S;
     for (S=0, i=1; i<=N; i += 2) 
            S+=log(i * 0.1);
