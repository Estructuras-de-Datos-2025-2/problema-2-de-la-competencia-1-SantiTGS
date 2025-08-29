#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *p;

    scanf("%d", &n);

    // Reservamos memoria para n enteros
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Leer los elementos
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);   
    }

    // Imprimir en orden inverso usando punteros
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }

    free(p);
    return 0;
}
