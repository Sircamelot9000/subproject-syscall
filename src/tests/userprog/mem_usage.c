#include <stdio.h>
#include <stdlib.h>
#include <syscall.h>

int main(void) {
    int usage = report_mem_usage();
    printf("Initial memory usage: %d bytes\n", usage);

    void *block = malloc(4096);  // Allocate 4KB (1 page)
    if (block != NULL) {
        usage = report_mem_usage();
        printf("Memory usage after malloc(4096): %d bytes\n", usage);
        free(block);
    }

    usage = report_mem_usage();
    printf("Memory usage after free: %d bytes\n", usage);

    return 0;
}
