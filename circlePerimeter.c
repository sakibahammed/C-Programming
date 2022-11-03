#include <stdio.h>

int main(){
    double radius , perimeter , PI = 3.1415;
    printf("Enter the value of Radius of a circle = ");
    scanf("%lf",&radius);

    perimeter = 2 * radius * PI;

    printf("Perimeter = %.2lf\n",perimeter);



}