#include <stdio.h>

int last_digit(long int base, long int exponent) {
   long int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
             result = (result * base) % 10;
        }
        base = (base * base) % 10;
        exponent /= 2;
    }
    return result;
}

int main() {

    long long int testy, num, a,b;
    scanf("%d",&testy);
    // testy = testy - 1;
    while(testy--)
    {
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d\n", last_digit(a, b));

    }
    // scanf("%d",&a);
    // scanf("%d",&b);

    // printf("%d", last_digit(a, b));

    return 0;
}