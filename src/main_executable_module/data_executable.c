#include "data_executable.h"

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

void make_decision(double *data, int n) {}
