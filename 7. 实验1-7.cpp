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
    double a = 0, b = 0, c = 0, t = 0;

    char str[100] = {0};
    char str1[100] = {0};
    char str2[100] = {0};
    scanf("%s %s %s", str,str1,str2);



    a = atof(str);
    b = atof(str1);
    c = atof(str2);

    if (a < b) {
        t = a;
        a = b;
        b = t;
    }

    if (a < c) {
        t = a;
        a = c;
        c = t;
    }

    if (b < c) {
        t = b;
        b = c;
        c = t;
    }

    printf("%.2f %.2f",a,c);
    return 0;
}