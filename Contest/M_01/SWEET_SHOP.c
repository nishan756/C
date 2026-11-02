#include<stdio.h>

int main() {

    int money, laddu;

    scanf("%d %d", &money, &laddu);

    int price_laddu = laddu*10;

    int current_money = money - price_laddu;

    printf("%d", current_money / 20);

    return 0;
}