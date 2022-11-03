#include <stdio.h>

int main(){
    printf("Enter the value of Radius = ");
    int radius ;
    
    double PI = 3.1415 , area;
    scanf("%d",&radius);

    area = PI * radius * radius;

    printf("The area is = %.2lf\n",area);

    
}