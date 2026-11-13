#include<stdio.h>

int main() {

    int x = 20;

    x++; //Post increment

    printf("The value of x after increment is : %d",x);

    printf("The value of x after increment is : %d\n", ++x);

    printf("Value is %d\n", ++x + x++); // 47

    print("The value after decrement is %d\n", --x); //23

    print("The value after decrement is %d\n", x--); //23

    printf("%d", x); //22

    return 0;
}