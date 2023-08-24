#include <stdio.h>

int main()
{
    unsigned long long n;
    char x, y;

    scanf("%llu", &n);

    x = n % 10;
    n = n / 10;
    while (n) {
        y = n % 10;

        if (x % 2 == y % 2) {
            printf("nu");
            return 0;
        }

        x = y;

        n = n / 10;
    }

    printf("da");

    return 0;
}
// 100/100
