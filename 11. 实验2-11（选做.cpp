#include <stdio.h>
#include <stdlib.h>


int main() {
    int h, u, d, i = 0, t;

    scanf("%d %d %d", &h, &u, &d);

    for (t = 0; i < h; t++) {

        if (t % 2 != 1)

            i = i + u;

        else

            i = i - d;

    }

    printf("%d\n", t);
    return 0;
}