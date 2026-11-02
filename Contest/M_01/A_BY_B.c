#include<stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int d = a/b;

    int r = a % b;

    double real = (double)a/b;

    printf("%d %d %.5lf\n", d,r,real);

    return 0;
}