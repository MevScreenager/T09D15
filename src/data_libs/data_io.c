#include "data_io.h"

int input(double *data, int *n) {
    char c1;
    if (scanf("%d%c", n, &c1) != 2) return 0;
    if ((int) c1 != 10) return 0;

    for (int i = 0; i < n; i++) {
        char c;
        if (scanf("%lf%c", &data[i], &c) != 2) return 0;
        if (c != 32 && i < *n - 1) return 0;
        if (c != 10 && i == *n - 1) return 0;
    }
    return 1;
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++)
        printF("%.2df", data[i]);
}
