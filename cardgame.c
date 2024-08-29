#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a1, a2, b1, b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);

        int wins = 0;

        // Các trường hợp có thể xảy ra
        if (a1 > b1 && a2 > b2) wins++;
        if (a1 > b2 && a2 > b1) wins++;
        if (a2 > b1 && a1 > b2) wins++;
        if (a2 > b2 && a1 > b1) wins++;

        printf("%d\n", wins);
    }

    return 0;
}
