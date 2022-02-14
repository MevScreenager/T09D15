#include "data_io.h"

int input(double *data, int *n) {

    // data = malloc(*n * sizeof(double));
    for (int i = 0; i < *n; i++) {
        char c;
        if (scanf("%lf%c", &data[i], &c) != 2) return 0;
        if (c != 32 && i < *n - 1) return 0;
        if (c != 10 && i == *n - 1) return 0;
    }
    return 1;
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++)
        printf("%.2lf", data[i]);
}
