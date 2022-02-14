#include "data_process.h"
#include "../data_libs/data_io.h"
#include<stdlib.h>

void main()
{
    double *data;
    int n;
    
    //Don`t forget to allocate memory !

    if (!input(data, &n)) {
        printf("n/a");
        return;
    }
    data = malloc(n * sizeof(double));
    if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");
    free(data);
    return;
}
