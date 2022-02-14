#include "data_process.h"
#include <math.h>

int normalization(double *data, int n)
{
    int result = 1;
    double max_value = max(data, n);
    double min_value = min(data, n);
    double size = max_value - min_value;

    if(fabs(size) < EPS)
    {
        for (int i = 0; i < n; i++)
        {
            data[i] = data[i] / size - min_value / size;
        }
    }
    else
    {
        result = 0;
    }
    
    return result;
}

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
