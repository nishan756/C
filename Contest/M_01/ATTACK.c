#include <stdio.h>

int main() {

    //Ceiling division = (A + B - 1) / B

    long long A, B;

    scanf("%lld %lld", &A, &B);

    long long ans = (A + B - 1) / B;

    printf("%lld\n", ans);

    return 0;
}