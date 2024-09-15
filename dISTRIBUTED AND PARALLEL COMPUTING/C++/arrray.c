#include<stdio.h>
#include "cmp.h"

void main(){
//declare 3 arrat
long i,k, N=1000;
long A[N],B[N], c[N];

//
//
//run the for loop and parallelize it.

#program omp parallel for
for (i=0; i<N; i++)
{
    B[i]=1*2; //for instilizing the value of Array B
    C[i]=1*2; //for instilizing the value of Array B
}

}