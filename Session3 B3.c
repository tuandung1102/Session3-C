#include <stdio.h>
#define PI 3.14

int main() {
    double radius, circumference, area;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &radius);

  
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

  
    printf("Chu vi hinh tron: %.2lf\n", circumference);
    printf("Dien tich hinh tron: %.2lf\n", area);

    return 0;
}

