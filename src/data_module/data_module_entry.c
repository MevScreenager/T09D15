#include "data_process.h"
#include "../data_libs/data_io.h"
#include<stdlib.h>
#include<stdio.h>

#include "../data_libs/data_io.c"
#include "data_process.c"

int main() {
    double *data = NULL;
    int n;
    char c1;

    if (scanf("%d%c", &n, &c1) != 2) {
        printf("n/a");
        return 0;
    }
    if ((int) c1 != 10) {
        printf("n/a");
        return 0;
    }
    data = malloc(n * sizeof(double));

    if (!input(data, &n)) {
        printf("n/a");
        free(data);
        return 0;
    }
    if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");
    free(data);
    return 0;
}
