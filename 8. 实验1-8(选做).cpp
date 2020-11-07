#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

void split(char *src, const char *separator, char **dest, int *num) {
    char *pNext;
    int count = 0;
    if (src == NULL || strlen(src) == 0) {
        return;
    }
    if (separator == NULL || strlen(separator) == 0) {
        return;
    }
    pNext = (char *) strtok(src, separator);
    while (pNext != NULL) {
        *dest++ = pNext;
        ++count;
        pNext = (char *) strtok(NULL, separator);
    }
    *num = count;
}


int main() {
    int  c,c1,m,c2;

    char str[100] = {0};
    scanf("%s", str);



    m = atof(str);
    if(m<10000){
        c1=20000;
        c2=10;
    } else if(m >=10000){
        c1=40000;
       c2=5;
    }
    c=c1+m*c2;
    printf("%d %d %d",m,c,c2);
    return 0;
}