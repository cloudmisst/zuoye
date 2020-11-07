#include <stdio.h>
#include <stdlib.h>


void game() {
    int ret = 0;
    int guess = 0;
    int index = 1;
    ret = rand() % 100 + 1;
    while (true) {
        printf("Please guess a magic number:");
        scanf("%d", &guess);
        if (ret < guess) {
            printf("Wrong! Too small!\n");
        } else if (ret > guess) {
            printf("Wrong! Too big!\n");
        } else {
            printf("Right!\n");
            break;
        }
        if (index++ >= 10) {
            break;
        }
    }
}

int main() {
    while (true) {
        game();
        printf("counter=10\n");
        printf("Do you want to continue(Y/y or N/n)?");
        char str[100] = {0};
        scanf("%s", str);

        if (!('y' == str[0] || 'Y' == str[0])) {
            return 0;
        }
    }
    return 0;
}