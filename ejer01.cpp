#include <iostream>

int main() {
    int numeros[10];
    int suma = 0;

    printf("Ingresa 10 números enteros:\n");

    for (int i = 0; i < 10; ++i  ) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }
    double promedio = static_cast<double>(suma) / 10;

    printf("El promedio de los 10 números es: %f\n", promedio);

    int mayoresQuePromedio = 0;

    for (int i = 0; i < 10; ++i) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }

    printf("El numero mayor del promedio es: %d\n", mayoresQuePromedio);

    return 0;
}
