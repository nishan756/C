#include<stdio.h>

int main() {

    /*formula

    Area = a * b

    Perimeter = 2*a + 2*b

    */

    int a, b;

    scanf("%d %d", &a, &b);

    int area = a*b;

    int perimeter = 2*a + 2*b;

    printf("%d %d\n", area, perimeter);

    return 0;
}