#include <stdlib.h>

int compareASC(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compareDESC(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}