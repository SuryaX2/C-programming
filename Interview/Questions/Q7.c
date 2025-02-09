// 7.WAP to find out Area of a circle(radius value user given)
#include <stdio.h>
#define PI 3.14159
float AreaOfCircle(float radius) {
    return PI * radius * radius;
}
int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle with radius %.2f is %.2f\n", radius, AreaOfCircle(radius));
    return 0;
}