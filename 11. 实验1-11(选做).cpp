#include <stdio.h>
#include <stdlib.h>


int main() {
    char str[100] = {0};
    char str1[100] = {0};
    char str2[100] = {0};
    scanf("%s %s %s", str,str1,str2);

  double  a,b,c;

    a = atof(str);
    b = atof(str1);
    c = atof(str2);
        if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
        {
            printf("yes");
        }
        else{ printf("no");
        }


    return 0;
}