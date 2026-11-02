#include<stdio.h>

#include<math.h>

int main() {

    double radius;

    const double pi = M_PI;

    scanf("%lf", &radius);

    double area = pi*pow(radius, 2);

    double circumference = 2*pi*radius;

    printf("%lf %lf",area, circumference);

    return 0;
}