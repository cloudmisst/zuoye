#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
    double item=1,sum=1,n=1;
    do
    {
        item*=1.0/n;
        sum+=item;
        n++;
    }while(fabs(item)>=1e-4);
    printf("e=%.4lf\n",sum);

    return 0;
}