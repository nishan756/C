#include<stdio.h>

int main() {

    //formula = x * 5000 + y * 9800


    int x, y;

    scanf("%d %d", &x, &y);

    int total = (x * 5000) + (y * 9800);

    printf("%d", total);

    return 0;
}