#include "data_stat.h"

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
double mean(double *data, int n) {}
double variance(double *data, int n) {}

