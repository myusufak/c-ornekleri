#include <stdio.h>

int main() {
    int i, n;
    long long a = 0, b = 1, c;

    printf("Kac terim Fibonacci serisi gormek istersiniz? ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Hata: Lutfen pozitif bir terim sayisi girin.\n");
    } else if (n == 0) {
        printf("Fibonacci Dizisi: (Bos)\n");
    } else if (n == 1) {
        printf("Fibonacci Dizisi: 0\n");
    } else {
        printf("Fibonacci Dizisi (%d terim): ", n);
        for (i = 0; i < n; i++) {
            printf("%lld ", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}