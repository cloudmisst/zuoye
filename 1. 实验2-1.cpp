#include <stdio.h>
#include<stdlib.h>

int main() {
    printf("Please enter n:");
    char str[100] = {0};
    scanf("%s",str);
    int n = atof(str);
    for (int i=0;i<n;i++){
        printf("%2d",i+1);
        printf("*");
        printf("%2d",i+1);
        printf("=");
        printf("%d \n",(i+1)*(i+1));
    }
    printf("\n");
    for (int i=0;i<n;i++){
        printf("%2d",i+1);
        printf("*");
        printf("%2d",i+1);
        printf("*");
        printf("%2d",i+1);
        printf("=");
        printf("%d \n",(i+1)*(i+1)*(i+1));
    }

    return 0;
}