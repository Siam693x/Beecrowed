
#include <stdio.h>

int main() {
    float a,b,c,pie = 3.14159;
    scanf("%f %f %f", &a, &b, &c);


    printf("TRIANGULO: %.3f\n", (a * c) / 2);
    printf("CIRCULO: %.3f\n", pie * c * c);
    printf("TRAPEZIO: %.3f\n", ((a + b) * c) / 2);
    printf("QUADRADO: %.3f\n", b * b);  
    printf("RETANGULO: %.3f\n", a * b);


    return 0;
}
