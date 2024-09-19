#include <stdio.h>
void main() {
    float radius, volume;
    float PI = 3.14159;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    volume = (4.0/3.0) * PI * radius*radius*radius;
    printf("The volume of the sphere is: %f", volume);
}

