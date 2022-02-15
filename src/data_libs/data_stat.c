#include "data_stat.h"
#include <math.h>
#ifndef DATA_STAT_C
#define DATA_STAT_C
double max(double *data, int n) {
    double d = data[0];
    for (int i = 1; i < n; i++)
        if (data[i] > d)
            d = data[i];
    return d;
}

double min(double *data, int n) {
    double d = data[0];
    for (int i = 1; i < n; i++)
        if (data[i] < d)
            d = data[i];
    return d;
}

double mean(double *data, int n) {
    double d = 0.0;
    for (int i = 0; i < n; i++)
        d = d + data[i];
    return (d * 1.0) / n;
}

double variance(double *data, int n) {
    double s2 = 0.0, s = 0.0;
    for (int i = 0; i < n; i++) {
        s2 = s2 + pow(data[i], 2);
        s = s + data[i];
    }
    return s2 - pow(s, 2);
}

#endif  // DATA_STAT_C
