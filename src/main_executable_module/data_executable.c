#include "data_executable.h"
#ifndef DATA_EXECUTABLE_C
#define DATA_EXECUTABLE_C

void quick_sort(double *data, int first, int last) {
    if (first < last) {
        int left = first, right = last, middle = data[(left + right) / 2];
        do {
            while (data[left] < middle)
                left++;
            while (data[right] > middle)
                right--;
            if (left <= right) {
                int time = data[left]; data[left] = data[right]; data[right] = time;
                left++;
                right--;
            }
        } while (left <= right);
        quick_sort(data, first, right);
        quick_sort(data, left, last);
    }
}

void sort(double *data, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++) {
            if (data[i] > data[j + 1]) {
                double time = data[i];
                data[i] = data[j + 1];
                data[j + 1] = time;
            }
        }
}

#endif  // DATA_EXECUTABLE_C
