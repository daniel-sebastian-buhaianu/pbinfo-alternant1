#include <stdio.h>

int main()
{
    char c, cifra_anterioara;
    unsigned short nrcif = 0;

    scanf("%c", &c);

    while (c >= '0' && c <= '9') {
        nrcif++;

        if (cifra_anterioara % 2 == c % 2) {
            printf("nu");
            return 0;
        }

        cifra_anterioara = c;

        scanf("%c", &c);
    }
    
    nrcif > 0 ? printf("da") : printf("nu");

    return 0;
}
// 70/100
