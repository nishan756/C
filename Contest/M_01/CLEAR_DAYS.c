#include<stdio.h>

int main() {

    //formula : 7 - rainy - cloudy;

    int rainy, cloudy;

    scanf("%d %d", &rainy, &cloudy);

    int clear = 7 - (rainy + cloudy);

    printf("%d", clear);

    return 0;
}