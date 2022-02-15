#include "../data_module/data_process.h"
#include "../data_libs/data_io.h"
#include "data_executable.h"
#include "../yet_another_decision_module/decision.h"
#include<stdio.h>
#include<stdlib.h>

#include "../data_module/data_process.c"
#include "../data_libs/data_io.c"
#include "data_executable.c"
#include "../yet_another_decision_module/decision.c"

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

    printf("LOAD DATA...\n");
    if (!input(data, &n)) {
        printf("n/a");
        free(data);
        return 0;
    }

    printf("RAW DATA:\n\t");
    output(data, n);

    printf("\nNORMALIZED DATA:\n\t");
    normalization(data, n);
    output(data, n);

    printf("\nSORTED NORMALIZED DATA:\n\t");
    sort(data, n);
    output(data, n);

    printf("\nFINAL DECISION:\n\t");
    make_decision(data, n);
    output(data, n);
    free(data);
    return 0;
}
