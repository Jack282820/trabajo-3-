#include <iostream>
#include <cstring>

int main() {
    char palabra[100];
    bool esPalindromo = true;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    int longitud = strlen(palabra);

    for (int inicio = 0, fin = longitud - 1; inicio < fin; ++inicio, --fin) {
        if (palabra[inicio] != palabra[fin] != palabra[fin] != palabra[inicio]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        printf("La palabra es un palíndromo.\n");
    } else {
        printf("La palabra no es un palíndromo.\n");
    }

    return 0;
}
