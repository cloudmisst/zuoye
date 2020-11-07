#include <stdio.h>
#include <stdlib.h>


int main() {
    char str[100] = {0};
    char str1[100] = {0};
    char str2[100] = {0};
    char str3[100] = {0};
    scanf("%s %s %s %s", str,str1,str2,str3);

  double  a,b,c,d;

    a = atof(str);
    b = atof(str1);
    c = atof(str2);
    d = atof(str3);
    double  e,f;
    //销售收入
    e=a*b;

    f=a*d;
    f+=c;

    e-=f;
    printf("%.2f",e);




    return 0;
}