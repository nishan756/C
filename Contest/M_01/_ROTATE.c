#include<stdio.h>

int main() {

    char a, b, c;

    //char - 48 -> Real number

    scanf("%c%c%c", &a, &b, &c);

    a -= 48;

    b -= 48;

    c -= 48;

    int abc, bca, cab;

    abc = a*100 + b*10 + c;

    bca = b*100 + c*10 + a;

    cab = c*100 + a*10 + b;

    printf("%d", abc+bca+cab);

    return 0;
}