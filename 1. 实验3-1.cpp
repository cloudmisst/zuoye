#include <stdio.h>

float  conver(int f ){
    return  5*(f-32)/9.0;
}



int main() {
int n,m;
scanf("%d %d",&n,&m);
    for (int j = n; j <=m; j+=4) {
        printf("%d%10.2f\n",j,conver(j));
    }


    return 0;
}