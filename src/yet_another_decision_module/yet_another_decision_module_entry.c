#include "decision.h"
#include "../data_libs/data_io.h"
#include<stdio.h>
#include<stdlib.h>

#include "decision.c"
#include "../data_libs/data_io.c"

int main() {
    double *data;
    int n;
    char c1;

    if (scanf("%d%c", &n, &c1) != 2) {
        printf("n/a");
        return 0;
    }
    if ((int) n != n || n < 1) {
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

    if (make_decision(data, n))
        printf("YES");
    else
        printf("NO");
    free(data);
    return 0;
}
