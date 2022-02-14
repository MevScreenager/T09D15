#include "data_io.h"
#include<stdio.h>
#ifndef DATA_IO_C
#define DATA_IO_C

int input(double *data, int *n) {
    for (int i = 0; i < *n; i++) {
        char c;
        if (scanf("%lf%c", &data[i], &c) != 2) return 0;
        if (c != 32 && i < *n - 1) return 0;
        if (c != 10 && i == *n - 1) return 0;
    }
    return 1;
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%0.2lf", data[i]);
            return;
        }
        printf("%0.2lf ", data[i]);
    }
}

#endif  // DATA_IO_C
