#include <stdio.h>

int main(void) {
    float r, circle_area;
    printf("Enter radius of circle: ");
    if (scanf("%f", &r) == 1) {
        circle_area = 3.14159265f * r * r;
        printf("Circle area = %.4f\n", circle_area);
    }

    float l, w;
    printf("Enter length and width of rectangle: ");
    if (scanf("%f %f", &l, &w) == 2) {
        printf("Rectangle area = %.2f\n", l * w);
    }

    float base, height;
    printf("Enter base and height of triangle: ");
    if (scanf("%f %f", &base, &height) == 2) {
        printf("Triangle area = %.2f\n", 0.5f * base * height);
    }

    return 0;
}

