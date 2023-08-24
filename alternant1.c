#include <stdio.h>

int main()
{
    char x, y;
    unsigned short nrcif = 0;

    scanf("%c", &x);

    if (x >= '0' && x <= '9') {
        nrcif++;
    }

    scanf("%c", &y);

    while (y >= '0' && y <= '9') {
        nrcif++;

        if (x % 2 == y % 2) {
            printf("nu");
            return 0;
        }

        x = y;

        scanf("%c", &y);
    }
    
    nrcif > 0 ? printf("da") : printf("nu");

    return 0;
}
// 80/100
