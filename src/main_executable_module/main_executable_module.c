#include "../data_module/data_process.h"
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#include "data_executable.h"

#include "../data_module/data_process.c"
#include "../data_libs/data_io.c"
#include "../data_libs/data_stat.c"

void main()
{
    double *data;
    int n;

    printf("LOAD DATA...\n");
    input(data, n);

    printf("RAW DATA:\n\t");
    output(data, n);

    printf("\nNORMALIZED DATA:\n\t");
    normalization(data, n);
    output(data, n);
    
    printf("\nSORTED NORMALIZED DATA:\n\t");
    quick_sort(data, 0, n - 1)
    output(data, n);
    
    printf("\nFINAL DECISION:\n\t");
    make_decision(data, n);
    output(data, n);
    
}
