#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, i;
    int *p;

    scanf("%lld", &n);

    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }

    free(p);
    return 0;
}
